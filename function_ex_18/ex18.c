#include <stdio.h>
void evennumberscopy(int*,int);
main(){
    //* the function that copy the even numbers from an array to another array 

    int myarray[]={1,2,3,4,5,6,7,8,9};
    int* ptr=&myarray;
    evennumberscopy(ptr,9);
}
void evennumberscopy(int *ptr,int size){
    int evennumbers[9]={0};
    int even=0;
    for(int i=0; i<size; i++){
        if(*(ptr+i)%2==0){
            evennumbers[even]=*(ptr+i);
            even++;
        }
    }
    for (int i = 0; i < even; i++)
    {
        printf("%d ",evennumbers[i]);
    }
}