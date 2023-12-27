#include <stdio.h>
#include <string.h>

main(){
    char sentence[30];int n;
    puts("Please enter a sentence :");
    gets(sentence);
    for(n=0; sentence[n]!='\0'; n++);
    sesliharf(sentence,n);
}
void sesliharf(char sentence[], int x){
    char sesliharfler[]={'a','e','i','o','u'};
    int sesliharfsayisi;
    for(int i=0; i<=x; i++){
        for(int j=0; j<=4; j++){
            if(sentence[i]==sesliharfler[j]){
                sesliharfsayisi++;
            }
        }
    }
    printf("sesli harf sayisi :%d",sesliharfsayisi);
}