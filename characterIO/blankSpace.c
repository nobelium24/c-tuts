#include <stdio.h>

int main()
{
    long c;
    int lastSpace = 0;
    while((c = getchar()) != EOF){
        if (c == ' '){
            if(!lastSpace){
                putchar(c);
                lastSpace = 1; 
            }else {
                putchar(c);
                lastSpace = 0;
            }
        }
    }
    return 0;
}