#include <stdio.h>
#include <math.h>

int main() {
    double x, resultado;

    printf("Digite um número: ");
    scanf("%lf", &x);

    resultado = x + pow(x, 2) + pow(x, x);

    printf("f(x) = %.4lf\n", resultado);

    return 0;
}
