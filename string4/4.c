#include <stdio.h>
#include <string.h>

main(){
    //* the function that reverse the a string sentence

    char mysentence[]="Hi this is my sentence ";
    strrev(mysentence); //! reverse function ..
    printf("%s\n\n",mysentence);

    //? the other part of this tryment

    char myothersentence[]="Hi my name is Kerem and im in 17 years old";
    strrev(myothersentence);
    printf("%s",myothersentence);
}