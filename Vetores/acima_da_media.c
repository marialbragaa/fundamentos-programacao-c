#include <stdio.h>

int main() {

float notas[5];
float media;
float soma = 0;
int i;

  
for (i = 0; i < 5; i++) {
    printf("Digite a nota %d: ", i + 1);
    scanf("%f", &notas[i]);
    soma = soma + notas[i];}

media = soma / 5;
printf("Media: %.2f\n", media);

for (i = 0; i < 5; i++) {
    printf("%.2f - ", notas[i]);
    if (notas[i] > media) {
        printf("Acima da media\n"); }
    else if (notas[i] < media) {
        printf("Abaixo da media\n");}
    else {
        printf("Na media\n"); }
    }

return 0;
}