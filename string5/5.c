#include <stdio.h>
#include <string.h>

int main() {
    char mysentence[] = "hi my name is kerem what is your name ", word[10], newword[10];
    int counter = 0, wordc = 0;

    printf("%s\n\n", mysentence);
    puts("Please enter a word that you want to search in the sentence:");
    
    
    fgets(word, sizeof(word), stdin);
    
    
    size_t len = strlen(word);
    if (len > 0 && word[len - 1] == '\n') {
        word[len - 1] = '\0';
    }

    for (int i = 0; i <= strlen(mysentence); i++) {
        if (mysentence[i] != ' ' && mysentence[i] != '\0') {
            newword[counter] = mysentence[i];
            counter++;
        } else {
            newword[counter] = '\0'; 
            if (strcmp(word, newword) == 0) {
                wordc++;
            }
            counter = 0;
        }
    }

    printf("The word found %d times\n", wordc);

    return 0;
}
