#include <stdio.h>

#define OUT  0  /* outside a word */
#define IN   1  /* inside a word */

int main(){
    int c, state;
    state = OUT;
    while ((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            putchar('\n');
            state = OUT;
        }else{
            if (state == OUT){
                state = IN;
            }
            putchar(c);
        }
    }
}