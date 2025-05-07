#include <stdio.h>

#define TAB_WIDTH 8

int main()
{

    int c;
    int pos = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            int spacesNeeded = TAB_WIDTH - (pos % TAB_WIDTH);
            for (int i = 0; i < spacesNeeded; i++)
            {
                putchar(' ');
                pos++;
            }
        }
        else
        {
            putchar(c);
            pos++;
            if (c == '\n')
                pos = 0;
        }
    }
    return 0;
}
