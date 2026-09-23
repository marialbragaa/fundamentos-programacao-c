#include <stdio.h>

int main(){

float altura;
float peso;
char sexo;

printf("Qual e a sua altura?\n");
scanf("%f", &altura);

printf("Qual e o seu sexo? (M para Masculino ou F para Feminino):\n");
scanf(" %c", &sexo);

if (sexo == 'M') {
    peso = (72.7 * altura) - 58;
} else{
    peso = (62.1 * altura) - 44.7;
}
printf("Seu peso_ideal (%c) e: %.2f", sexo, peso);

}