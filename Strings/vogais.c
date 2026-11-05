#include <stdio.h>

int main() {
char texto[60];
int i, vogais = 0;

printf("Digite uma frase: ");
fgets(texto, sizeof(texto), stdin);

for (i = 0; texto[i] != '\0'; i++) {
    if (texto[i] == 'a' || texto[i] == 'e' ||
        texto[i] == 'i' || texto[i] == 'o' ||
        texto[i] == 'u' || texto[i] == 'A' ||
        texto[i] == 'E' || texto[i] == 'I' ||
        texto[i] == 'O' || texto[i] == 'U') {

        vogais++;}
 }

printf("Quantidade de vogais: %d\n", vogais);

return 0;
}
