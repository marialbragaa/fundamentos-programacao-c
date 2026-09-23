#include <stdio.h>

int main() {

float notas [3];
float soma = 0, media;
int i;

for(i = 0; i < 3; i ++){
printf("Digite a sua nota %d:", i + 1);
scanf("%f", &notas[i]);

soma = soma + notas [i];
}
media = soma / 3.0;
printf("Media do aluno: %.2f\n", media);

return 0;
}
