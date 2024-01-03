#include <stdio.h>
void oddnumberscopy(int*,int);
main(){
    //* the function that copy the odd numbers from an array to another array 

    int mynumbers[]={1,2,3,4,5,6,7,8,9};
    int *ptr=&mynumbers;
    oddnumberscopy(ptr,9);
}
void oddnumberscopy(int *ptr,int size){
    int oddnumbers[9]={0},odd=0;
    for (int i = 0; i < size; i++)
    {
        if(*(ptr+i)%2!=0){
            oddnumbers[odd]=*(ptr+i);
            odd++;
        }
    }
    for (int i = 0; i < odd; i++)
    {
        printf("%d ",oddnumbers[i]);
    }
}