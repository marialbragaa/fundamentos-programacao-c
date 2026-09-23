#include <stdio.h>

int main() {

float numero1;
float numero2;
char operacao;
float resultado;

printf("Digite uma operacao aritmetica (+, -, *, /): ");
scanf("%f   %c   %f", &numero1, &operacao, &numero2);
if (operacao == '+'){
    resultado = (numero1 + numero2);
    printf("Resultado da adicao: %.2f", resultado);
} else if (operacao == '*') {
    resultado = (numero1 * numero2);
    printf("Resultado da multiplicacao: %.2f", resultado);
} else if (operacao == '/'){
    resultado = (numero1 / numero2);
    printf("Resultado da divisao: %.2f", resultado);
} else if (operacao == '-') { 
    resultado = (numero1 - numero2);
    printf("Resultado da subtracao: %.2f", resultado);
} else {
    printf("Operacao invalida!");
}

return 0;
}