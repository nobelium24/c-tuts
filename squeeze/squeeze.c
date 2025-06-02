#include <stdio.h>

// void squeeze(char s[], int c)
// {
//     int i, j;

//     for (i = j = 0; s[i] != '\0'; i++)
//         if (s[i] != c)
//             s[j++] = s[i];
//     s[j] = '\0';
// }

void squeeze(char s1[], char s2[])
{
    int i, j;
    int k = 0;
    for (i = 0; s1[i] != '\0'; i++)
    {
        int f = 0;
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                f = 1;
                break;
            }
        }

        if (!f)
        {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
}