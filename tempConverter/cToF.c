#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower = 0;
    float upper = 148.9;
    float step = 10;

    celsius = lower;
    printf("%s %s\n", "Celsius", "Fahrenheit");
    while (celsius <= upper)
    {
        fahr =160 + (9.0 * celsius)/5; 
        printf("%3.0f %8.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}