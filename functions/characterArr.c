#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxLine);
void copy(char from[], char to[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while((len = getLine(line, MAXLINE)) > 0){
        // if (len > max){
        //     max = len;
        //     copy(longest, line);
        // }
        int totalLine = len;
        while(len == MAXLINE - 1 && line[MAXLINE - 2] != '\n'){
            len = getLine(line, MAXLINE);
            totalLine += len;
        }
        if(totalLine > max){
            max = totalLine;
            copy(longest, line);
        }
    }

    if (max > 0){
        printf("Longest line: %s\n", longest);
        printf("Length: %d\n", max);
    }
    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 1) { // Store only up to lim - 1 characters
            s[i] = c;
        }
    }
    if (c == '\n') {
        if (i < lim - 1) {
            s[i] = c;
            ++i;
        }
    }
    s[i < lim - 1 ? i : lim - 1] = '\0'; // Null-terminate the string
    return i; // Return the length of the portion read
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

