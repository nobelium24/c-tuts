#include <stdio.h>

#define TAB_WIDTH 8
// #define OUT 0
// #define IN 1

// int main()
// {
//     int c, state;
//     int pos, spaceNum = 0;

//     while ((c = getchar()) != EOF)
//     {
//         if (c == ' ')
//         {
//             state = IN;
//             ++spaceNum;
//             pos++;
//         }
//         else
//         {
//             state = OUT;
//             int spacesToTabStop = TAB_WIDTH - (pos % TAB_WIDTH);
//             if (spaceNum >= spacesToTabStop)
//             {
//                 putchar('\t');
//                 spaceNum -= spacesToTabStop;
//             }
//             spaceNum = 0;
//             putchar(c);
//             pos += (TAB_WIDTH - (pos % TAB_WIDTH));
//         }
//     }
//     return 0;
// }



int main()
{
    int c;
    int pos = 0;            
    int spaceNum = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            spaceNum++;     
        }
        else
        {
            while (spaceNum > 0)
            {
                int spacesToTabStop = TAB_WIDTH - (pos % TAB_WIDTH);

                if (spaceNum >= spacesToTabStop)
                {
                    putchar('\t');
                    pos += spacesToTabStop;
                    spaceNum -= spacesToTabStop;
                }
                else
                {
                    putchar(' ');
                    pos++;
                    spaceNum--;
                }
            }

            putchar(c);

            if (c == '\n')
            {
                pos = 0;     
            }
            else
            {
                pos++;
            }
        }
    }

    while (spaceNum > 0)
    {
        int spacesToTabStop = TAB_WIDTH - (pos % TAB_WIDTH);

        if (spaceNum >= spacesToTabStop)
        {
            putchar('\t');
            pos += spacesToTabStop;
            spaceNum -= spacesToTabStop;
        }
        else
        {
            putchar(' ');
            pos++;
            spaceNum--;
        }
    }

    return 0;
}
