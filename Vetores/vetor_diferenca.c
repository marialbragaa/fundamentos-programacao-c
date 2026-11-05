#include <stdio.h>

int main() {

int A[5];
int B[5];
int C[5];
int i;

  
for (i = 0; i < 5; i++) {
    printf("Digite o valor %d do vetor A: ", i + 1);
    scanf("%d", &A[i]);}

for (i = 0; i < 5; i++) {
    printf("Digite o valor %d do vetor B: ", i + 1);
    scanf("%d", &B[i]); }

for (i = 0; i < 5; i++) {
    C[i] = A[i] - B[i];}
    printf("Vetor C: ");

for (i = 0; i < 5; i++) {
    printf("%d ", C[i]); }

return 0;
}