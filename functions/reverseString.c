#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void reverse(char s[]);

int main(){
    char line[MAXLINE];
    while (fgets(line, MAXLINE, stdin) != NULL) {  // Read one line at a time
        reverse(line);
        printf("%s", line);  // Print reversed line
    }
    return 0;
}


void reverse(char s[]){
    int i, j, len;
    i = 0;
    len = strlen(s);
    j = len -1;

    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}