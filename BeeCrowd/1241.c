#include <stdio.h>
#include <string.h>

int encaixa(char a[], char b[]) {
int i;
int tamA = strlen(a);
int tamB = strlen(b);

if (tamB > tamA) {
    return 0;
}

for (i = 0; i < tamB; i++) {
    if (a[tamA - tamB + i] != b[i]) {
        return 0;
    }
}

return 1;
}

int main() {
int n, i;
char a[1001], b[1001];

printf("Digite a quantidade de casos:\n");
scanf("%d", &n);

for (i = 0; i < n; i++) {
    printf("Digite o numero A:\n");
    scanf("%1000s", a);

    printf("Digite o numero B:\n");
    scanf("%1000s", b);

    if (encaixa(a, b) == 1) {
        printf("encaixa\n");
    } else {
        printf("nao encaixa\n");
    }
}

return 0;
}
