#include <stdio.h>

void fibonacci(unsigned long long f[]) {
int i;

f[0] = 0;
f[1] = 1;

for (i = 2; i <= 60; i++) {
    f[i] = f[i-1] + f[i-2];
}
}

int main() {
unsigned long long f[61];
int t, n, i;

fibonacci(f);

printf("Digite a quantidade de casos:\n");
scanf("%d", &t);

for (i = 0; i < t; i++) {
    printf("Digite o numero para calcular Fibonacci:\n");
    scanf("%d", &n);

    printf("Fib(%d) = %llu\n", n, f[n]);
}

return 0;
}
