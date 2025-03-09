#include <stdio.h>

struct Chars
{
    char character;
    int count;
};

int main()
{
    int c;
    int characterTracker[256] = {0};

    while ((c = getchar()) != EOF)
    {
        characterTracker[c]++;
    }

    for (int i = 1; i < 256; i++)
    {
        if (characterTracker[i] > 0)
        {
            printf("%2d: ", i);
            for (int j = 0; j < characterTracker[i]; j++)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}