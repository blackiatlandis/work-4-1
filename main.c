#include <stdio.h>
#include "func.h"
#define LEN_MAX 90

int main()
{
    int lengthOfString;
    char oneLineString[LEN_MAX];
    FILE *inputFilePointer = fopen("input.txt", "r");
    while ((lengthOfString = readLine(oneLineString, inputFilePointer)) != -1)
    {
        turnArr(oneLineString, lengthOfString);
        printArr(oneLineString, lengthOfString);
    }
    return 0;
}