#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //* delete the spaces that in a sentence

    char mysentence[]="Hi that is my sentence";int counter=0;
    char mysentencewithoutspace[strlen(mysentence)];
    for (int i = 0; i < strlen(mysentence); i++)
    {
        if(mysentence[i]!=' '){
            mysentencewithoutspace[counter]=mysentence[i];
            counter++;
        }
        else{
            continue;
        }
    }
    mysentencewithoutspace[counter]='\0';
    printf("%s\n\n",mysentencewithoutspace);
    strcpy(mysentence,mysentencewithoutspace);
    printf("%s",mysentence);
    return 0;
}
