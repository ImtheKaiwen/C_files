#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //* strcmp function , it gives 0 if it's true 

    char mysentence[]="hi";
    char mysecondsentence[]="hi";
    if(strcmp(mysentence,mysecondsentence)==0){
        printf("Thats are same sentence ..");
    }
    else{
        printf("They are not same ..");
    }
    
    return 0;
}
