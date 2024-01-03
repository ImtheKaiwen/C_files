#include <stdio.h>
void multiplymyarray(int*,int);
main(){
    //* multiply the elements of an array and print it 

    int myarray[] = {1,2,3,4,5,6,7,8,9};
    int* ptr = &myarray;
    multiplymyarray(ptr,9);
}
void multiplymyarray(int *ptr, int size){
    int multiplication = 1 ;
    for (int i = 0; i < size; i++)
    {
        multiplication *= *(ptr+i);
    }
    printf("The answer of the question is : %d",multiplication);
}