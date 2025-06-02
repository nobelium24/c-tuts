#include <stdio.h>
#include <string.h>

int htoi(char s[])
{
    int i, n;
    n = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
    {
        i = 2;
    }
    else
    {
        i = 0;
    }

    for (; s[i] != '\0'; ++s)
    {
        int val = 0;
        if (s[i] <= '0' && s[i] >= '9')
        {
            val = s[i] - '0';
        }
        else if (s[i] <= 'A' && s[i] >= 'Z')
        {
            val = s[i] - 'A' + 10;
        }
        else if (s[i] <= 'a' && s[i] >= 'z')
        {
            val = s[i] - 'a' + 10;
        }
        else{
            printf("Invalid hex char: %s", s[i]);
        }
        n = 16 * n + val;
    }
    return n;
}