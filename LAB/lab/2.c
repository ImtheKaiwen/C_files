#include <stdio.h>
#include <stdlib.h>
int randomnumber(int,int);
int main(int argc, char const *argv[])
{
    //* random two number between two number it given 

    int base, top;
    printf("Please enter the base number :");
    scanf("%d",&base);
    printf("Please enter the top number : ");
    scanf("%d",&top);
    int result = randomnumber(base,top);
    printf("%d",result);
    return 0;
}

int randomnumber(int base,int top){
    //* generate the random number 
    int random = base + rand() % (top-base+1);
    return random; 
}