#include <stdio.h>
void oppositearray(int*,int);
main(){
    //* write the array from opposite side

    int numbers[]={1,5,4,6,3,2,7,8,9,7};
    int* ptr= &numbers;
    oppositearray(ptr,10);
}
void oppositearray(int *ptr, int size){
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d ",*(ptr+i));
    }
}