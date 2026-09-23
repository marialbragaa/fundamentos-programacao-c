#include <stdio.h>

int main() {

int numero;
int par = 0;

printf("Digite um numero inteiro: ");
scanf("%d", &numero);

par = (numero %2 == 0);

printf("O numero zero representa par, e o numero 1 representa impar: ");
if (par) {
    printf("0\n");
} else {
    printf("1\n");
}


return 0;
}