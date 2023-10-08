/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "lab1.h"
#include <string.h>

char* readString(char* fileName){
    char * myString;
    myString = (char *) malloc(100);
    FILE *fptr;
    fptr = fopen(fileName, "r");
    if(fptr == NULL){
        return "Not able to open file\n";
    }
    fgets(myString, sizeof(myString), fptr);
    fclose(fptr);
    myString[strcspn(myString, "\n")] = '\0';
    return myString;
}

char* mysteryExplode(const char* str){
    int i;
    int length = ((strlen(str)*(strlen(str) + 1))/ 2) +1;
    char* answer = (char*)malloc(length);
    memset(answer, '\0', length);
    for(i=0; i <= strlen(str);i++)
        strncat(answer,str,i);
    return answer;
}