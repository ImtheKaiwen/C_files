#include <stdio.h>
void changethelocation(int*,int,int,int);
main(){
    //* The function that change the locations of two number that in array
    int myarray[]={1,3,4,5,6,7,8,9},first,second;
    int *ptr=&myarray;
    puts("Please choose the first numbers location :");
    scanf("%d\n",&first);
    puts("Please enter the second number that you want to change its location :");
    scanf("%d",&second);
    changethelocation(ptr,8,first,second);
}
void changethelocation(int *ptr,int size,int first,int second){
    int temp;
    temp = *(ptr+second-1);
    *(ptr+second-1)=*(ptr+first-1);
    *(ptr+first-1) = temp;
    for (int i = 0; i < size; i++)
    {
        printf("%d ",*(ptr+i));
    }
}
