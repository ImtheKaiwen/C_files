#include <stdio.h>
#include <string.h>
#include <ctype.h>
void removespaces(char*);
int polindromornot(char*);
int main(int argc, char const *argv[])
{
    //* the function it checks the is that a polindrom sentence or not 
    while (1>0)
    {
        char sentence[50];
        puts("\nPlease enter a sentence\n");
        fgets(sentence,sizeof(sentence), stdin);
        if(sentence[strlen(sentence)-1]=='\n'){
            sentence[strlen(sentence)-1]=='\0';
        }
        char* ptr=&sentence;
        removespaces(ptr);
        if(polindromornot(ptr)==1){
            printf("The sentence is polindrom\n");
        }
        else{
            printf("The sentence is not a polindrom\n");
        }
    }
    return 0;
}
int polindromornot(char* ptr){
    int length = strlen(ptr);
    for(int i = 0; i < length/2; i++)
    {
        if(ptr[i]==ptr[length-i-1]){
            return 1; //polindrom
        }
        else{
            return 0; //not polindrom
        }
    }
    
}
void removespaces(char* ptr){
   int i,j=0;
   for ( i = 0; ptr[i]; i++)
   {
        if(isalnum(ptr[i])){
            ptr[j++]=ptr[i];
        }
   }
   ptr[j]='\0';
}