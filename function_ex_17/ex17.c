#include <stdio.h>
#include <string.h>
void lettercount(char*,int);
main(){
    //* the function that calculates the how much letter is a sentence 

    char mysentence[30]="selamlar";
    char* ptr=&mysentence;
    lettercount(ptr,30);
}
void lettercount(char* ptr,int size){
    int each=0;
    for (int i = 0; i < size; i++)
    {
        if((*(ptr+i)>'A' && *(ptr+i)<'Z') || (*(ptr+i)>'a' && *(ptr+i)<'z')){
            each++;
        }
    }
    printf("Your sentence includes %d letter ..", each);
}