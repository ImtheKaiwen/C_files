#include <stdlib.h>
#include <stdio.h>
void sum(int,int);
main(){
    //* sum of two numbers with funcitons 
    int first,second;
    puts("Please enter first number : ");
    scanf("%d",&first);
    puts("PLease enter second number :");
    scanf("%d",&second);
    sum(first,second);
}
void sum(int firstone, int secondone){
    int sum = firstone + secondone ;
    printf("%d",sum);
}