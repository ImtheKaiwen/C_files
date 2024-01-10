#include <stdio.h>
#include <string.h>
void justlast(char[]);
int main(int argc, char const *argv[])
{
    char mysentence[80];
    puts("Please enter a sentence :");
    gets(mysentence);
    justlast(mysentence);
    return 0;
}
void justlast(char mysentence[]){
    size_t len = strlen(mysentence);
    for (int i = 0; i <=len; i++)
    {
        if(mysentence[i]==' ' || mysentence[i]=='\0' || mysentence[i]=='\n'){
            printf("%c",mysentence[i-1]);
        }
        else{
            printf(" ");
        }
    }
}