#include <stdio.h>

int main(){
int notas[10][3];
float soma[3]={0,0,0};
float media[3];
int i,j;

for(i=0;i<10;i++){
    for(j=0;j<3;j++){
        printf("Digite a nota do aluno %d na unidade %d: ",i+1,j+1);
        scanf("%d",&notas[i][j]);
        soma[j]=soma[j]+notas[i][j];}}

for(j=0;j<3;j++){
    media[j]=soma[j]/10;
    printf("Media da unidade %d: %.2f\n",j+1,media[j]);}

return 0;
}