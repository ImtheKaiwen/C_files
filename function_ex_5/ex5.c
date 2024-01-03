#include <stdio.h>
void fibonacci(int);
main(){
    //* the funciton that calculates the fibonacci's given number 
    int choice;
    puts("Please enter the choice");
    scanf("%d",&choice);
    fibonacci(choice);
}
void fibonacci(int n){
    //* 1 1 2 3 5 8 13 etc
    int a=1, b=1, c=a+b;
    if(n==1){
        printf("1");
    }
    else if(n==2){
        printf("1 1");
    }
    else{
        for (int i = 0; i < n/3; i++)
        {
            printf("%d %d %d ",a,b,c);
            a =  b+c ;
            b =  a+c ;
            c =  a+b ;
        }
        
    }
}