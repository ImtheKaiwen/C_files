#include <stdio.h>
void connectbotharray(int*,int*,int,int);
main(){
    //* the funciton that connect the both array 

    int firstarray[]={1,2,3,4,5},secondarray[]={6,7,8,9};
    int* ptrf=&firstarray;
    int* ptrs=&secondarray;
    connectbotharray(ptrf,ptrs,5,4);
}
void connectbotharray(int *ptrf,int *ptrs, int sizef, int sizes){
    int connectedarray[sizef+sizes],i;
    for ( i = 0; i < sizef; i++)
    {
        connectedarray[i]=*(ptrf+i);
    }
    for ( i=sizef; i < sizef+sizes; i++)
    {
        connectedarray[i]= *(ptrs+(i-sizef));
    }
    for ( i = 0; i < 9; i++)
    {
        printf("%d ",connectedarray[i]);
    }
}