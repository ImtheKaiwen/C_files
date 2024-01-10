#include <stdio.h>
void asalmi(int);
int main(int argc, char const *argv[])
{
    //* asal sayi mi degil mi kontrol et

    int sayi; 
    printf("Please enter a number : ");
    scanf("%d",&sayi);
    asalmi(sayi);
    return 0;
}

void asalmi(int number){
    int kontrol;
    for (int i = 1; i <=number; i++)
    {
        if (number%i==0)
        {
            kontrol++;
        }
    }
    if (kontrol==2)
    {
        puts("Asal ");
    }
    else{
        puts("Degil ");
    }
    
}