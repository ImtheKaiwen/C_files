#include <stdio.h>
void sumofarrayelements(int*,int);
main(){
    //* sum of the elements of an array 

    int mynumbers[]={1,4,5,6,9,8,7};
    int* ptr= &mynumbers;
    sumofarrayelements(ptr,7);
}
void sumofarrayelements(int *ptr, int size){
    int sum=0;
    for (int i=0; i < size ; i++)
    {
        sum += *(ptr+i);
    }
    printf("The answer of the question is : %d", sum);
}
