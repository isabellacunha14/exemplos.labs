//Seu programa irá receber dois números inteiros e irá armazená-los nas variáveis a e b.
//Como saída, seu programa deve exibir inicialmente os valores das variáveis a e b.
//# Em seguida, seu programa deve efetuar uma sequência de operações aritméticas
//utilizando as variáveis a e b,
// e exibir o resultado na seguinte ordem:

#include <stdio.h>
#include <math.h> // Para a função pow

int main() {
    int a, b;

    // Recebe os valores de a e b
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // Exibe os valores recebidos
    printf("Valores recebidos:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Realiza e exibe as operações
    printf("\nResultados das operacoes:\n");
    printf("Soma: a + b = %d\n", a + b);
    printf("Subtracao: a - b = %d\n", a - b);
    printf("Multiplicacao: a * b = %d\n", a * b);
    printf("Exponenciacao: a ** b = %.0f\n", pow(a, b));

    // Verifica divisão por zero
    if (b != 0) {
        printf("Divisao inteira: a / b = %d\n", a / b);
        printf("Resto da divisao: a %% b = %d\n", a % b);
    } else {
        printf("Divisao inteira: impossivel dividir por zero.\n");
        printf("Resto da divisao: impossivel dividir por zero.\n");
    }

    return 0;
}
