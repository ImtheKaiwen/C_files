#include <stdio.h>
void minmax(int[],int);
main(){
    //* the function that found the min and max values of an array  

    int array[]={1,1,13,15,26,4,5,78,93};
    minmax(array,9);
}
void minmax(int myarray[],int size){
    int min=myarray[0], max = myarray[0];
    for(int i=0; i<=size-1; i++){
        if(myarray[i]>max){
            max=myarray[i];
        }
        if(myarray[i]<min){
            min=myarray[i];
        }
    }
    printf("The max value of your array is : %d\n",max);
    printf("The min value of your array is : %d",min);
}