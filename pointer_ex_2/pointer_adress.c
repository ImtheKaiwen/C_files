#include <stdio.h>

void main(){

    //* I'll create a variable to set as 5
    int number = 5; 

    int* ptr = &number; //* I created a pointer and set it as number's adress

    changemynumber(ptr); //* Sent adress

    printf("%d",number); //? printed 
}

    // My function that changes the value of my variable 
void changemynumber(int *number){

    //* it took an adress and chane it's value
    *number = 15;
}