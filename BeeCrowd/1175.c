#include <stdio.h>

void inverter(int n[]) {
int i, aux;

for (i = 0; i < 10; i++) {
    aux = n[i];
    n[i] = n[19 - i];
    n[19 - i] = aux;
}
}

int main() {
int n[20], i;

for (i = 0; i < 20; i++) {
    printf("Digite o numero %d:\n", i + 1);
    scanf("%d", &n[i]);
}

inverter(n);

printf("\nVetor invertido:\n");

for (i = 0; i < 20; i++) {
    printf("N[%d] = %d\n", i, n[i]);
}

return 0;
}
