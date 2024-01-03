#include <stdio.h>
#include <math.h>
void squareroot(int);
main(){
    //* the fubction that calculates the square root of a number
    int root;
    puts("Please enter a number :");
    scanf("%d",&root);
    squareroot(root);
}
void squareroot(int root){
    int square = sqrt(root);
    printf("The answer : %d", square);
}