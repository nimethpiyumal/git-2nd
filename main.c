#include <stdio.h>

int main() {
    float celsius, fahrenheit;


    printf("Enter temperature in Centigrade: ");
    scanf("%f", &celsius);


    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;


    printf("%.2f Centigrade is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
