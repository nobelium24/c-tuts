#include <stdio.h>

int main(){
    int age; 
    printf("Enter your age: ");
    scanf("%d", &age);
    age = age + 5;
    printf("You will be %d\n in 5 years", age);
    return 0;
}