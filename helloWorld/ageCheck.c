#include <stdio.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers are not allowed\n");
    } else if (num % 2 == 0) {
        printf("%d is an even number\n", num);
    } else {
        printf("%d is an odd number\n", num);
    }

    return 0;
}


// int main()
// {
//     int score;
//     printf("Enter your score: ");
//     scanf("%d", &score);

//     if (score > 70)
//     {
//         printf("A");
//     }
//     else if (score >= 69 && score <= 60)
//     {
//         printf("B");
//     }
//     else if (score >= 59 && score <= 50)
//     {
//         printf("C");
//     }
//     else if (score >= 49 && score <= 45)
//     {
//         printf("D");
//     }
//     else if (score < 45 && score >= 0)
//     {
//         printf("F\n");
//     }
//     else
//     {
//         printf("Invalid score\n"); // Handle negative or too high inputs
//     }

//     return 0;
// }

// int main() {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);

//     if (age < 0) {
//         printf("Invalid age\n");
//     } else if (age < 18) {
//         printf("You're a minor\n");
//     } else {
//         printf("You're an adult\n");
//     }

//     return 0;
// }
