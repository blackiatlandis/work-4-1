#include <stdio.h>

int readLine(char *oneLineString, FILE *inputFilePointer)
{
    char temporaryCharacter;
    int lengthOfString;
    for (lengthOfString = 0; !((temporaryCharacter = fgetc(inputFilePointer)) == '\n'); lengthOfString++) {
        if (temporaryCharacter == EOF) {
            lengthOfString = -1;
            break;
        }
        oneLineString[lengthOfString] = temporaryCharacter;
    }
    if (lengthOfString != -1)
        oneLineString[lengthOfString] = '\0';
    return lengthOfString;
}

void turnArr(char *oneLineString, int lengthOfString)
{
    int a = lengthOfString / 2;
    char temporaryCharacter;
    for (int i = 0; i < a; i++) {
        temporaryCharacter = oneLineString[i];
        oneLineString[i] = oneLineString[lengthOfString - 1 - i];
        oneLineString[lengthOfString - 1 - i] = temporaryCharacter;
    }
}

void printArr(char *oneLineString, int lengthOfString)
{
    for (int i = 0; i < lengthOfString; i++)
        putchar(oneLineString[i]);
    putchar('\n');
}