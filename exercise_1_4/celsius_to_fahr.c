#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    int upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    celsius = lower;
    printf("-----Celsius to Fahrenheit Chart-----\n");

    while (celsius <= upper) {
        fahrenheit = celsius * (5.0 / 9.0) + 32.0;
        printf("%.f\t%6.2f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }


}