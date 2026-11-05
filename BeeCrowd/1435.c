#include <stdio.h>

void preencher(int m[][100], int n) {
int i, j, valor;

for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
        valor = i;

        if (j < valor)
            valor = j;
        if (n - 1 - i < valor)
            valor = n - 1 - i;
        if (n - 1 - j < valor)
            valor = n - 1 - j;

        m[i][j] = valor + 1;
    }
}
}

int main() {
int m[100][100], n, i, j;

printf("Digite o tamanho da matriz:\n");
scanf("%d", &n);

while (n != 0) {
    if (n > 0 && n <= 100) {
        preencher(m, n);

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (j > 0)
                    printf(" ");

                printf("%3d", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    } else {
        printf("Tamanho invalido!\n");
    }

    printf("Digite outro tamanho (0 para sair):\n");
    scanf("%d", &n);
}

return 0;
}
