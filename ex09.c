#include <stdio.h>

int main(){
    float Celsius;
    float somma;
    printf("inserisci i gradi in Celsius:");
    scanf("%f", &Celsius);
    somma = Celsius + 273.15;
    printf("la conversione dei Celsius in Kelvin è:%f\n", somma);

    float Fahrenheit;
    Fahrenheit = Celsius * 9/5 + 32;
    printf("la conversione dei Celsius in Fahrenheit è:%f\n", Fahrenheit);
    }