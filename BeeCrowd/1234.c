#include <stdio.h>
#include <string.h>
#include <ctype.h>

void dancar(char frase[]) {
int i, cont = 0;

for (i = 0; frase[i] != '\0'; i++) {
    if (frase[i] != ' ') {
        if (cont % 2 == 0) {
            frase[i] = toupper(frase[i]);
        } else {
            frase[i] = tolower(frase[i]);
        }
        cont++;
        }
    }
}

int main() {
char frase[60];

printf("Digite uma frase (SAIR para encerrar):\n");
fgets(frase, 60, stdin);

while (strcmp(frase, "SAIR\n") != 0 &&
        strcmp(frase, "SAIR") != 0) {

    frase[strcspn(frase, "\n")] = '\0';

    dancar(frase);

    printf("Resultado: %s\n", frase);

    printf("Digite outra frase (SAIR para encerrar):\n");
    if (fgets(frase, 60, stdin) == NULL) {
        break;
    }
    }

return 0;
}
