#include <stdio.h>

int main() {
  
float horas;
float taxa;
float total;

printf("Digite a quantidade de horas trabalhadas: ");
scanf("%f", &horas);

printf("Digite a taxa a ser paga por hora: ");
scanf("%f", &taxa);

total = horas * taxa;

printf("Valor a ser pago: %.2f", total);

return 0;

}

