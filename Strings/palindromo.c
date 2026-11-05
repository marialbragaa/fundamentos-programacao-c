#include <stdio.h>
#include <string.h>

int main() {
char palavra[70];
int i, tamanho, palindromo = 1;

printf("Digite uma palavra: ");
scanf("%69s", palavra);

tamanho = strlen(palavra);

for (i = 0; i < tamanho / 2; i++) {
    if (palavra[i] != palavra[tamanho - 1 - i]) {
        palindromo = 0;
        break;
    }
}

if (palindromo == 1) {
     printf("A palavra e um palindromo!\n");
} else {
     printf("A palavra nao e um palindromo.\n"); }

return 0;
}
