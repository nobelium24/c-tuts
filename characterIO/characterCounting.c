#include <stdio.h>

//Character counting
// int main(){
//     long nc;
//     nc = 0;
//     while (getchar() != EOF){
//         ++nc;
//     }
//     printf('Number of characters: %ld \n', nc);
// }

//Line counting
// int main()
// {
//     long nc;
//     for(nc = 0; getchar() != EOF; ++nc){
//         if (getchar() == '\n'){
//             ++nc;
//         }
//     }
//     printf('Number of lines: %ld', nc);
// }

//word, char, & lin counting

#define OUT  0  /* outside a word */
#define IN   1  /* inside a word */

int main()
{
    int c, nl, nw, nc, state;
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n'){
            ++nl;
        }
        if(c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
        }else {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}