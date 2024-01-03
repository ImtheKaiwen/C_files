#include <stdlib.h>
#include <stdio.h>
void force(int,int);
main(){
    //* tha function that calculates the force of a number

    int firstone, secondone ;
    puts("Please enter the first number :");
    scanf("%d",&firstone);
    puts("Please enter the second number :");
    scanf("%d",&secondone);
    force(firstone,secondone);
}
void force(int first , int second){
    int answer = 1;
    for (int i = 0; i < second; i++)
    {
        answer *= first;
    }
    
    printf("The answer of the question is : %d", answer);
}