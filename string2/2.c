#include <stdio.h>
#include <string.h>

main(){
    //* STRCPY function that copies the a sentence to other array as you see under
    char mysentence[]="Hi this is my sentence";
    char copysentence[]="";
    strcpy(copysentence,mysentence);
    printf("%s",copysentence);
}