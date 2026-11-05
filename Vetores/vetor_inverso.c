#include <stdio.h>

int main() {

int numeros [5];
int i;

for (i = 0; i < 5; i++) {
    printf("Digite o %d valor: ", i + 1);
    scanf("%d", &numeros[i]);
}
printf("Ordem inversa: ");
 for (i = 4; i >= 0; i--) {
    printf("%d ", numeros[i]); }

return 0;
 }