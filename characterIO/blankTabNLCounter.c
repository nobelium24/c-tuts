#include <stdio.h>

int main(){
    long blank, tab, newLine, c;
    while ((c = getchar()) != EOF)
    {
        if(c == " "){
            ++blank;
        }else if (c == "\t"){
            ++tab;
        }else if(c == "\n"){
            ++newLine;
        }
    }
    return 0;
}