#include <curses.h>
#include <stdio.h>


int main(int argc, char* argv[])
{
    FILE* file;
    char line[100];
    printf("ARGC: %d\n", argc);
    printf("filename: %s\n", argv[1]);
    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Can not open the file\n");
    }
    while(fgets(line, 100, file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}

