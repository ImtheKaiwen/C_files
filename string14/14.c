#include <stdio.h>
#include <string.h>
#include <ctype.h>
int wordcounter(char*);
int main(int argc, char const *argv[])
{
    //* the function as word counter in a sentence 

    char mysentence[]="That is my sentence and do you know how much word in it?";
    char*ptr=&mysentence;
    printf("Your words that in the sentence is %d",wordcounter(ptr));
    return 0;
}
int wordcounter(char*ptr){
    int counter=0;
    for (int i = 0;  i < strlen(ptr)+1; i++)
    {
        if(ptr[i]==' '||ptr[i]=='\0'){
            counter++;
        }
    }
    return counter;
}
