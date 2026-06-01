#include <stdio.h>

int main() {
    float celsius, fahrenheit;


    printf("Enter temperature in Centigrade:\n ");
    scanf("%f", &celsius);


    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;


    printf("%.2f Centigrade is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
   if(fahrenheit>=86){
    printf("\nToday is hot-You must drink water well\n");
   }
   else {
    printf("\nToday is cool\n");
   }
    printf("\n Have a great day\n");

    return 0;
}
