#include <stdio.h>

int main() {

float notas[3];
float soma = 0, media;
int i;

for(i = 0; i < 3; i++) {
    printf("Digite a nota do aluno %d:", i + 1);
    scanf("%f", &notas[i]);

soma = soma + notas[i];
}

media = soma / 3.0;
printf("Media do aluno: %.2f\n", media);

for(i = 0; i < 3; i++) {
    if(soma / 3.0 >= 7) {
        printf("1");
        break;
    } else {
        printf("2");
        break;
    }
    }

return 0;
}

