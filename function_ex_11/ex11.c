#include <stdio.h>
void sortmyarray(int*,int);
main(){
    //* sort an array by greatest to lower 

    int myarray[]={1,9,4,3,2,7,5,6,7};
    int* ptr = &myarray; 
    sortmyarray(ptr,9);
}
void sortmyarray(int *ptr,int size){
    for (int i = 0; i < size; i++)
    {
        int first=*(ptr+0),temp=0;
        for (int j = 1; j < size; j++)
        {
            if(*(ptr+j-1)>*(ptr+j)){
                temp = *(ptr+j-1);
                *(ptr+j-1) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(ptr+i));
    }
    
    
}