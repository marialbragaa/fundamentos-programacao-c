#include <stdio.h>

int main() {

float altura;
float peso;
float IMC;

printf("Digite o seu peso:\n ");
scanf("%f", &peso);

printf("Digite a sua altura:\n ");
scanf("%f", &altura);

IMC = peso / (altura * altura);

if (IMC < 18.5) {
    printf ("Voce esta abaixo do peso.");
}
else if (IMC >= 18.5 && IMC <= 24.9) {
    printf("Seu peso esta normal.");
}
else if (IMC >= 25.0 && IMC <= 29.9) {
    printf("Voce esta sobrepeso!");
}
else {
    printf("Voce esta com obesidade.");
}
return 0;
}