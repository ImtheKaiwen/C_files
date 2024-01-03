#include <stdio.h>
void getsquareofmyarray(int*,int);
main(){
    //* the function that gets the squares of the numbers that in an array 

    int mynumbers[]={1,4,5,6,7,8,9,22};
    int *ptr=&mynumbers;
    getsquareofmyarray(ptr,8);
}
void getsquareofmyarray(int* ptr,int size){
    for (int i = 0; i < size; i++)
    {   
        *(ptr+i)=pow(*(ptr+i),2);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(ptr+i));
    }
    
}