#include <stdio.h>

void mostrar(float a[], int n) {
int i;

for (i = 0; i < n; i++) {
    if (a[i] <= 10) {
        printf("A[%d] = %.1f\n", i, a[i]);
    }
}
}

int main() {
float a[100];
int i;

for (i = 0; i < 100; i++) {
    printf("Digite o numero %d:\n", i + 1);
    scanf("%f", &a[i]);
}

printf("\nNumeros menores ou iguais a 10:\n");
mostrar(a, 100);

return 0;
}
