#include <stdio.h>

int main(void) {
    int num;
    double fatorial=1;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fatorial *=i;
    }

    printf("O fatorial de %d eh: %.lf", num, fatorial);
    return 0;
}