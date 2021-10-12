#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sizeOfFile(FILE *filename);

int main(int argc, char **argv)
{
    if ( argc < 3 ) 
    {
        printf("Error, I need a file %s <FILENAME>", *(argv + 1));
        exit(EXIT_FAILURE);
    }

    // Making a file, and getting the size of the file.
    FILE *pBook;
    pBook = fopen(*(argv + 1), "r");
    int fileSize = sizeOfFile(pBook) + 1;
    if ( fileSize < 0 ) {
        exit(EXIT_FAILURE);
    }

    const char* wordToDecode = *(argv + 2);
    // Making a Buffer of size FileSize, and setting its values to NULL
    char *buffer = NULL;
    buffer = (char*) malloc(fileSize * sizeof(char));
    if (buffer != NULL) {
        memset(buffer, 0, sizeof(buffer));
    }

    // Reading in the values from the File.
    if ( pBook != NULL )
    {
        fread(buffer, fileSize, sizeof(char), pBook);
        fclose(pBook);
    }

    // printing the content of the file.
    // which is saved in the buffer.
    printf("%s\n", buffer);
}

// Seeking thru the whole file, and at the end, save the location as an int to size;
// Returns -1 if failed.
int sizeOfFile(FILE *filename)
{
    int size;
    if ( filename != NULL ) {
        fseek(filename, 0, SEEK_END);
        size = ftell(filename);
        rewind(filename);
    } else {
        perror("Could not find file");
        return -1;
    }
    return size;
}