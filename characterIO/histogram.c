#include <stdio.h>

#define OUT  0  /* outside a word */
#define IN   1  /* inside a word */

int main() {
    int c, state, wordLenTracker;
    state = OUT;
    wordLenTracker = 0;
    int wordLength[11] = {0};  

    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == '\n' || c == ' ') {  
            if (state == IN) { 
                if (wordLenTracker > 10) {
                    printf("Word longer than 10 characters encountered!\n");
                } else {
                    ++wordLength[wordLenTracker];  
                }
                wordLenTracker = 0;  
                state = OUT;  
            }
        } else {
            if (state == OUT) {  
                state = IN;
            }
            ++wordLenTracker;  
        }
    }

    for (int i = 1; i <= 10; i++) {
        printf("%2d: ", i);
        for (int j = 0; j < wordLength[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
