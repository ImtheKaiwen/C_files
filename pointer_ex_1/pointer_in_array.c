#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//* main function 
main(){
    
    //* we created an array 

    int numbers[] = {1, 2, 3, 4};

    //* there is our pointer 
    int* ptr=&numbers;

    //* we called the function that views us the indexs of the array 
    printmyarray(ptr, 4);

}

//* my function
void printmyarray(int *ptr, int size){

    //* it prints the elements of the array
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",*(ptr+i)); //* we wrote there as *(ptr + i)  cause it shows ith index of array 
    }
}