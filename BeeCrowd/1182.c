#include <stdio.h>

float calcular(float m[][12], int c, char op) {
float soma = 0;
int i;

for (i = 0; i < 12; i++) {
    soma = soma + m[i][c];
}

if (op == 'M') {
    return soma / 12;
} else {
    return soma;
}
}

int main() {
float m[12][12], resultado;
int c, i, j;
char op;

printf("Digite a coluna (0 a 11):\n");
scanf("%d", &c);

printf("Digite a operacao (S ou M):\n");
scanf(" %c", &op);

for (i = 0; i < 12; i++) {
    for (j = 0; j < 12; j++) {
        printf("Digite o valor M[%d][%d]:\n", i, j);
        scanf("%f", &m[i][j]);
    }
}

resultado = calcular(m, c, op);

printf("Resultado: %.1f\n", resultado);

return 0;
}
