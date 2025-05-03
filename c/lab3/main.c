#include <stdio.h>

int main(void) {
    float orcamento;
    char clima, tempolivre;

    printf("Digite a orcamento: ");
    scanf("%f", &orcamento);

    printf("Digite a previsao do clima:");
    scanf(" %c", &clima);

    printf("Digite como esta o tempo livre");
    scanf(" %c", &tempolivre);

    if (orcamento <= 500) {
        switch (tempolivre) {
            case 'p': //pouco
                printf("Descansar \n");
                break;

            case 'm': //medio
                if (clima == 'e' || clima == 'n') {
                    printf("Caminhada\n");
                } else if (clima == 'c') {
                    printf("Descansar \n");
                }
                break;

            case 'a': //alto
                if (clima == 'e' || clima == 'n') {
                    printf("Piscina\n");
                } else if (clima == 'c') {
                    printf("Descansar \n");
                }
                break;
        }
    } else {
        switch (tempolivre) {
            case 'p': //pouco
                printf("Descansar \n");
            break;

            case 'm': //medio
                if (clima == 'e') {
                    printf("Caminhada\n");
                } else if (clima == 'n') {
                    printf("Cinema \n");
                } else if (clima == 'c') {
                    printf("Leitura\n");
                }
            break;

            case 'a': //alto
                if (clima == 'e' || clima == 'n') {
                    printf("Praia \n");
                } else if (clima == 'c') {
                    printf("Leitura \n");
                }
            break;
        }

    }
    return 0;
}