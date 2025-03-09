#include <stdio.h>

int main()
{
    int f;
    int c;
    #define LOWER 0
    #define UPPER 300
    #define STEP 20

    for (f = UPPER; f > LOWER; f -= STEP)
    {
        c = 5 * (f - 32) / 9;
        printf("%3d %6d\n", f, c);
    }

    return 0;
}