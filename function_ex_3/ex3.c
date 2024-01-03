#include <stdlib.h>
#include <stdio.h>
void factoriel(int);
main(){
    //* we'll code the function that calculates the factoriel of a number

    int number;
    puts("Please enter a number");
    scanf("%d",&number);
    factoriel(number);
}
void factoriel(int number){

    int fac=1;

    for (int i = 1; i <=number; i++)
    {
        fac*=i;
    }

    printf("The factoriel : %d",fac);
}