
#include <stdio.h>

int menor(int v[], int n) {

int i, pos = 0;

    for (i = 1; i < n; i++) {
        if (v[i] < v[pos]) {
            pos = i;
        }
    }

    return pos;
}

int main() {
    
int x[1000], n, i, pos;

printf("Digite a quantidade de numeros:\n");
scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o numero %d:\n", i + 1);
        scanf("%d", &x[i]);
    }

    pos = menor(x, n);

printf("Menor valor: %d\n", x[pos]);
printf("Posicao: %d\n", pos);

return 0;
}
