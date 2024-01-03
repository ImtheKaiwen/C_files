#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    //* div sentence as ','
    char mysentence[]="Hi that is my sentence",word[15];
    int counter=0;
    for (int i = 0; i < strlen(mysentence)+1; i++)
    {
        if(isspace(mysentence[i])||mysentence[i]=='\0'){
            word[counter]='\0';
            counter=0;
            printf("%s\n",word);
        }
        else{
            word[counter]=mysentence[i];
            counter++;
        }
    }
    return 0;
}
