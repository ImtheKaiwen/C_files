#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //* To upper function 
    char mysentence[]="What the hell is going on there";
    strupr(mysentence);
    printf("%s",mysentence);
    return 0;
}
