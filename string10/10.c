#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //* the function that controls the alt sentences in a sentence. strstr function 
    char mysentence[]="Hi that is my first sentence ";
    char mysecondsentence[]="Hi";
    char result = strstr(mysentence,mysecondsentence);
    if(result!=NULL){
        printf("Found");
    }
    else{
        printf("Not found");
    }
    return 0;
}
