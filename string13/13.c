#include <stdio.h>
#include <string.h>
#include <ctype.h>
void deletepuncts(char*);
int main(int argc, char const *argv[])
{
    //* the function that deletes the puncts from the sentence

    char mysentence[]="That is my sentence, do you know how is that being ?";
    char* ptr= &mysentence;
    printf("%s\n",mysentence);
    deletepuncts(ptr);
    printf("%s\n",mysentence);
    return 0;
}
void deletepuncts(char* ptr){
    int i,j=0;
    for ( i = 0; ptr[i]; i++)
    {
        if(!ispunct(ptr[i])){
            ptr[j++]=ptr[i];
        }
    }
    ptr[j]='\0';
}