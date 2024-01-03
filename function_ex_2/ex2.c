#include <stdlib.h>
#include <stdio.h>
void multiplication(float,float);
main(){
    //* multiplication function of two number but it's as float

    float first, second;

    puts("PLease enter the first number :");
    scanf("%f",&first);
    puts("Please enter the second number :");
    scanf("%f",&second);
    multiplication(first,second);
}
void multiplication(float firstone, float secondone){
    float multiplication = firstone * secondone ;
    printf("%f",multiplication);
}