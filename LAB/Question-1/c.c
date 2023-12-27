// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //* 10 sayı girilecek en büyük iki olan sayıyı bulacak
    int numbers[10],temp=0;
    for(int i=0; i<=9; i++){
        printf("please enter a number :");
        scanf("%d",&numbers[i]);
    }
    for(int j=0; j<=9; j++){
        for(int i=1; i<=9; i++){
       if(numbers[i]>numbers[i-1]){
           temp=numbers[i-1];
           numbers[i-1]=numbers[i];
           numbers[i]=temp;
       }
    }
    }
    printf("Most bigger first : %d\n",numbers[0]);
    printf("Most bigger second : %d\n",numbers[1]);

    return 0;
}