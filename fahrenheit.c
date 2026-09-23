#include <stdio.h>

int main() {

float celsius;
float convertido;

printf("Digite em CELSIUS a temperatura atual: ");
scanf("%f", &celsius);

convertido = (celsius * 9/5) + 32;

printf("Temperatura convertida para Fahrenheit: %.2f", convertido);

return 0;
}

