#include <stdio.h>

int main () {
    int fahrenheit, celsius; 
    int lower, upper, step;

    lower = 0; /*lower limit of temperature table*/
    upper = 300; /*upper limit of the table*/
    step = 20; /*steps between the temperatures*/

    fahrenheit = lower;

    printf("-----Fahrenheit to Celsius Chart-----\n");

    while (fahrenheit <= upper) {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%d\t%d\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
    return 0;
}

