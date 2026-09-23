#include <stdio.h>

int main() {

float nota1, nota2, nota3, media;
int numerofaltas;

printf("Digite a nota 1: ");
scanf("%f", &nota1);

printf("Digite a nota 2: ");
scanf("%f", &nota2);

printf("Digite a nota 3: ");
scanf("%f", &nota3);

printf("Digite a quantidade de faltas: ");
scanf("%d", &numerofaltas);

media = (nota1 + nota2 + nota3) / 3;

printf("\nMedia do aluno: %.2f | Faltas: %d\n", media, numerofaltas);

if (numerofaltas >= 15){
    printf("REPROVADO POR FALTAS");
}
else if (media >= 7.0) {
        printf("APROVADO POR MEDIA\n");}
else if (media >= 4.0 && media < 7.0) {
        printf("PROVA FINAL\n");}
else {
    printf("REPROVADO POR MEDIA\n");
}
return 0;
}