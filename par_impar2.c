#include <stdio.h>

int main() {

int numero;
int par = 0;

printf("Digite um numero: ");
scanf("%d", &numero);

par = (numero %2 == 0);
if (par) {
    printf("O numero %d e par.", numero);
} else{
    printf("O numero %d e impar.", numero);
}
return 0;
}