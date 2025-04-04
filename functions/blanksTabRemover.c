#include <stdio.h>

#define MAXLINE 1000

int main(){
    int c;        
    int hasNonWhitespace = 0;

    while ((c = getchar()) != EOF){
        if (c == '\n'){
            if(hasNonWhitespace){
                putchar(c);
            }
        }else if(c != ' ' && c != '\t'){
            putchar(c);
            hasNonWhitespace = 1;
        }
    }
    return 0;
}