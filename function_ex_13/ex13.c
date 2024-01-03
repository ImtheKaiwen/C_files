#include <stdio.h>
void arithmeticmeanofmyarray(int*,int);
main(){
    //* the arithmetic mean of an array 

    int myarray[]={1,2,3,4,5,6,7,8,9};
    int *ptr= &myarray;
    arithmeticmeanofmyarray(ptr,9);
}
void arithmeticmeanofmyarray(int *ptr,int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=*(ptr+i);
    }
    sum/=size;
    printf("The answer of the quesiton is : %d",sum);
}