#include <stdio.h>

#define MAXLINE 1000

int main()
{
    int len;            /* current line length */
    int max;            /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    // char longest[MAXLINE]; /* longest line saved here */
    while ((len = charCount(line, MAXLINE)) > 0){
        if(len > 80)
        printf("%s", line);
    }
    return 0;
}

int charCount(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != "\n"; ++i)
    {
        s[i] = c;
    }
    if (c != '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}