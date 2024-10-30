#include <stdio.h>
#include <stdlib.h>

#include "ansi.h"
#include "vector.h"
//gcc main.c -o main_exec ; ./main_exec .\test_code.minc

// mindustry logic language is abbreviated as mlog
// the code made by the user is abbreviated as ucode

// Maximal size of the ucode file
const int UCODE_SIZE_MAX = 4096;

// Exit with error message (EXITING HAS TO HAPPEN IN MAIN)
void exit_error_message(char *str)
{
    printf("%s%s%s\n", ansi_red(), str, ansi_reset());
    printf("%s~~~ End of Line ~~~%s\n", ansi_blink(), ansi_reset());
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) { 
    // 1. process command line arguments
    // a) get input file with ucode
    if (argc < 2)
    {
        exit_error_message("File with user code not provided (as the first command line argument)");
    }

    // 2. read ucode
    // a) load file
    FILE *ucode_fileptr;
    ucode_fileptr = fopen(argv[1], "r"); 
    if (ucode_fileptr == NULL)
    {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg), "Could not open file \"%s\"", argv[1]);
        exit_error_message(error_msg);
    }

    // b) check file size
    fseek(ucode_fileptr, 0, SEEK_END);
    long file_size = ftell(ucode_fileptr);
    rewind(ucode_fileptr);
    
    if (file_size > UCODE_SIZE_MAX)
    {
        // close file
        fclose(ucode_fileptr);
        ucode_fileptr = NULL;

        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg), "The provided file exceeded the maximal size: %d bytes)", UCODE_SIZE_MAX);
        exit_error_message(error_msg);
    }
    
    // c) load file
    char ucode[UCODE_SIZE_MAX];
    fgets(ucode, UCODE_SIZE_MAX, ucode_fileptr);

    // d) close file
    fclose(ucode_fileptr);
    ucode_fileptr = NULL;

    printf("%s", ucode);

    vector v;
    v.capacity = 10;
    v.size = 2;
    v.element_size = sizeof(int);
    v.data = 

	return EXIT_SUCCESS;
}