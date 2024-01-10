#include <stdio.h>
int sum(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Please enter a number :");
    scanf("%d",&n);
    int result = sum(n);
    printf("%d",result);
    return 0;
}

int sum(int n){
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
}
