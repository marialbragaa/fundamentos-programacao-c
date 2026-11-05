#include <stdio.h>

void mensagem(char frase[]) {
int i, inicio = 1;

for (i = 0; frase[i] != '\0'; i++) {
    if (frase[i] == ' ') {
        inicio = 1;
    }
    else if (frase[i] == '\n') {
        break;
    }
    else if (inicio == 1) {
        printf("%c", frase[i]);
        inicio = 0;
    }
}
}

int main() {
int n, i;
char frase[60];

printf("Quantas frases deseja digitar?\n");
scanf("%d", &n);
getchar();

for (i = 0; i < n; i++) {
    printf("Digite a frase %d:\n", i + 1);
    fgets(frase, 60, stdin);

    printf("Mensagem escondida: ");
    mensagem(frase);
    printf("\n");
}

return 0;
}
