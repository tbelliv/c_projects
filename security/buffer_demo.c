//buffer_demo.c

#include <stdio.h>
#include <string.h>

//This program demonstrates a buffer overflow vulnerability.

void vulnerable_function(char *input) {
    
    //declares a small buffer of 10 bytes.
    char buffer[10];

    //copies input into the buffer using strcpy
    //strcpy does NOT check the length of the input (this is known as 'bound checking')
    //if the input is longer than 10 chars, it will overwrite past the end of the buffer
    //this is what makes this func vulnerable to a buffer overflow attacks
    strcpy(buffer, input);

    //if no overflow happens, this line executes normally. (where: input <= 10)
    printf("Function executed successfully\n");
}

int main(int argc, char *argv[]) {
    //argc:"argument count" is an integer holding the number of arguments provided in the command line
    //argv:"argument vector" is an array of strings holding each argument provided
    //	- argv[0] is the program's name ("./buffer_demo")
    //	- argv[1] is the first argument given by the user

    //checks if there is at least one command-line arg after the program name ("./buffer_demo hi")
    if (argc > 1) {
        //passes the first user-provided argument (argv[1]) to vulnerable_function
        //*** this is where the buffer overflow might happen if the input is too large ***
        vulnerable_function(argv[1]);
    } else {
        //if no argument is provided, inform the user how to use the program
        //argv[0] displays the program's name in the usage message
        printf("Usage: %s <input>\n", argv[0]);
    }
    return 0;
}

/*
Example usage:

1. Compiling the program:
   gcc -fstack-protector -o buffer_demo buffer_demo.c

2. Running the program with a normal input (argv[1] is a small string):
   ./buffer_demo Hello
   - argc = 2
   - argv[0] = "./buffer_demo"
   - argv[1] = "Hello"
   Output:
   Function executed successfully

3. Running the program with an overflow input (argv[1] is too large):
   ./buffer_demo AAAAAAAAAAAAAAAAA
   - argc = 2
   - argv[0] = "./buffer_demo"
   - argv[1] = "AAAAAAAAAAAAAAAAA"
   Expected output if stack canaries are enabled:
   *** stack smashing detected ***: terminated
   Aborted

4. Running the program without an input argument:
   ./buffer_demo
   - argc = 1
   - argv[0] = "./buffer_demo"
   Expected output:
   Usage: ./buffer_demo <input>
*/
