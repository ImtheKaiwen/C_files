#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //* to lower case function 
    
    char mysentence[]="HI GUYS THAT IS MY SENTENCE";
    strlwr(mysentence);
    printf("%s",mysentence);
    return 0;
}
