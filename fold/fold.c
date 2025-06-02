// #include <stdio.h>

// #define MAX_CHAR 10

// int main()
// {
//     int c;
//     int pos = 0;
//     char buffer[MAX_CHAR];
//     int lastBlankPos;

//     while ((c = getchar()) != EOF)
//     {
//         buffer[pos] = c;
//         putchar(c);
//         if (c == ' ' || c == '\t'){
//             lastBlankPos = pos;
//         }
//         pos++;

//         if(pos == MAX_CHAR){
//             if (lastBlankPos >= 0){
//                 for (int i = 0; i <= lastBlankPos; i++){
//                     putchar(buffer[i]);
//                     putchar(' ');
//                 }
//                 for (int i = lastBlankPos; i <= MAX_CHAR; i++){
//                     putchar(buffer[i]);
//                 }
//             }else {
//                 for (int i = 0; i <= pos; i++){
//                     putchar(buffer[i]);
//                     putchar(' ');
//                 }
//                 pos = 0;
//             }
//             lastBlankPos = 0;
//         }
//     }
// }

#include <stdio.h>

#define MAX_CHAR 10  // fold line after this many characters

int main()
{
    int c;
    char buffer[MAX_CHAR];  // stores characters until folding
    int pos = 0;            // current position in buffer
    int lastBlankPos = -1;   // position of last blank (space or tab)

    while ((c = getchar()) != EOF)
    {
        buffer[pos] = c;

        // Track the position of the last blank
        if (c == ' ' || c == '\t')
            lastBlankPos = pos;

        pos++;

        if (pos == MAX_CHAR)  // buffer is full
        {
            if (lastBlankPos >= 0)  // we have a blank to break at
            {
                // print up to lastBlankPos
                for (int i = 0; i <= lastBlankPos; i++)
                    putchar(buffer[i]);
                putchar('\n');

                // move remaining chars after lastBlankPos to start of buffer
                int j = 0;
                for (int i = lastBlankPos + 1; i < pos; i++, j++)
                    buffer[j] = buffer[i];

                pos = j;           // update position
            }
            else  // no blank found, force break at MAX_CHAR
            {
                for (int i = 0; i < pos; i++)
                    putchar(buffer[i]);
                putchar('\n');

                pos = 0;  // buffer emptied
            }

            lastBlankPos = -1;  // reset last blank marker
        }

        if (c == '\n')  // if newline in input, flush buffer
        {
            for (int i = 0; i < pos; i++)
                putchar(buffer[i]);
            putchar('\n');
            pos = 0;
            lastBlankPos = -1;
        }
    }

    // print any remaining characters after EOF
    if (pos > 0)
    {
        for (int i = 0; i < pos; i++)
            putchar(buffer[i]);
        putchar('\n');
    }

    return 0;
}
