#include <stdio.h>
#include <string.h>

main(){
    //* get a sentence 
    char sentence[20]; char temp=' ';
    puts("Please enter a sentence :");
    gets(sentence);
    for(int j=0; j<sizeof(sentence); j++){
        for (int i = 1;i<sizeof(sentence); i++)
        {
            if(sentence[i]!=' '){
                if(sentence[i]<sentence[i-1]){
                    temp=sentence[i-1];
                    sentence[i-1]=sentence[i];
                    sentence[i]=temp;
                }
            }
            else{
                // nothing
            }
         
        }
    }
    printf("%s",sentence);
    

}
