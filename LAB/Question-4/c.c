// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

main(){
    //*sıralı bir dizi oluştur 
    int numbers[10],number,temp;
    for(int i=0; i<=8; i++){
        puts("Please enter a number :");
        scanf("%d",&numbers[i]);
    }
    puts("please enter a number that will append");
    scanf("%d",&number);
    numbers[9]=number;
    for(int i=0; i<=9;i++){
        for(int j=1; j<=9; j++){
            if(numbers[j]>numbers[j-1]){
                temp=numbers[j-1];
                numbers[j-1]=numbers[j];
                numbers[j]=temp;
            }
        }
    }
    for(int i=0; i<=9; i++){
        printf("%d ",numbers[i]);
    }
}