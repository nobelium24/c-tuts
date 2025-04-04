#include <stdio.h>


void tempConv(float lower, float upper, float step);

int main()
{
    tempConv(0, 600, 20);
    return 0;
}

void tempConv(float lower, float upper, float step)
{
    float fahr, celsius;
    fahr = lower;
    printf("%1s %6s\n", "Fahrenheit", "Celsius");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %13.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}