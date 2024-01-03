#include <stdio.h>
void isthatperfectnumber(int);
main(){
    //* the function it looks for is that number a perfect number or not 

    int mynumber;
    puts("Please enter a number :");
    scanf("%d",&mynumber);
    isthatperfectnumber(mynumber);
}
void isthatperfectnumber(int number){
    int sum=0;
    for (int i = 1; i <number; i++)
    {
       if(number%i==0){
            sum+=i;
       }
    }
    if(sum==number){
        printf("Yes that is a perfect number !");
    }
    else{
        puts("No that is not a perfect number !");
    }
}