#include <stdio.h>

int main(int argc, char *argv[]) { 

    printf("%d\n", argc);
    for (int arg_n = 0; arg_n <= argc; ++arg_n)
    {
        // argv[arg_n] is a pointer to a string
        printf("%s\n", argv[arg_n]);
    }
	return 0;
}