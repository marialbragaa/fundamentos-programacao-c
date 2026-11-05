#include <stdio.h>

int maior (int v[], int tamanho){

int indice = 0;
int i;

for (i = 1; i < tamanho; i++){
     if (v[i] > v[indice]){ 
            indice = i; 
    }
}
return indice;

}

int main(){

int numeros [3];
int i;

for (i = 0; i < 3; i++){
    printf("Digite um numero: \n");
    scanf("%d", &numeros[i]);
}
printf("Indice do maior: %d", maior (numeros,5));

return 0;

}
