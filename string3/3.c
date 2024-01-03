#include <stdio.h>
#include <string.h>

main(){
    //* a function that concatenate both sentence in first sentence 
    char mysentence[]="Hi this is my sentence.";
    char mysecondsentence[]="That is my second sentence";
    strcat(mysentence,mysecondsentence);
    printf("%s\n\n",mysentence);

    //* other try

    char first[]="Hi guys ima coding this language.";
    char second[]="That language is C.";
    strcat(first,second);
    printf("%s",first);
}
