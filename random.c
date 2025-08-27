#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();  

int main() {
    srand(time(NULL));
    char word[8];
    for (int i = 0; i < 7; i++) {
        word[i] = randchar();
    }
    word[7] = '\0';
    printf("Random 7-letter word: %s\n", word);
    return 0;
}
