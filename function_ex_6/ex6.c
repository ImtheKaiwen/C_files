#include <stdio.h>
int primenumber(int);
main(){
    //* The function that calculates is that a prime number or not 

    int number;
    puts("Please enter a number ");
    scanf("%d",&number);
    int returned = primenumber(number);
    if(returned==1){
        puts("It's a prime number");
    }
    else{
        puts("It's not a prime number");
    }
}
int primenumber(int number){
    int total = 0 ;
    for (int i = 1; i <=number; i++)
    {
        if(number%i==0){
            total++;
        }
    }
    if(total==2){
        return 1;
    }
    else{
        return 0;
    }
        
    
}
