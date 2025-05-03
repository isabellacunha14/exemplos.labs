#include <stdio.h>

int main(void) {
    int Vj,Dj,Rj,Cj; //jinx
    int Ve,De,Re,Ce; //Ekko
    int ataque;
    int vidamaxJ, vidamaxE;
    int contJ = 0, contE = 0;
    char atacante;

    scanf("%d", &Vj); //vida maxima Jinx
    scanf("%d", &Ve); //vida maxima Ekko
    scanf("%d", &Dj); // Dano de Jinx
    scanf("%d", &De); // Dano de Ekko
    scanf("%d", &Rj); //Porcentagem de recuperacao Jinx
    scanf("%d", &Re); //Porcentagem de recuperacao Ekko
    scanf("%d", &Cj); //Quantidade de golpes até o critico do Jinx
    scanf("%d", &Ce); //Quantidade de golpes até o critico do Ekko

    vidamaxE= Ve;
    vidamaxJ= Vj;

    // Loop até que um morra
    while (Vj > 0 && Ve > 0) {
        scanf(" %c", &atacante); // espaço antes de %c ignora enter

        if (atacante == 'J') {
            contJ++;    // Jinx ataca
            contE = 0;  // contador do Ekko zera

            // Verifica se é golpe crítico
            int dano = (contJ == Cj) ? 2 * Dj : Dj;
            if (contJ == Cj) contJ = 0;

            Ve -= dano;

            // Recuperação de vida da Jinx
            if (Vj < vidamaxJ) {
                Vj += (vidamaxJ * Rj) / 100;
                if (Vj > vidamaxJ) Vj = vidamaxJ;
            }
        }

        else if (atacante == 'E') {
            contE++;    // Ekko ataca
            contJ = 0;  // contador da Jinx zera

            // Verifica se é golpe crítico
            int dano = (contE == Ce) ? 2 * De : De;
            if (contE == Ce) contE = 0;

            Vj -= dano;

            // Recuperação de vida do Ekko
            if (Ve < vidamaxE) {
                Ve += (vidamaxE * Re) / 100;
                if (Ve > vidamaxE) Ve = vidamaxE;
            }
        }
    }

    // Impressão do vencedor
    if (Vj <= 0)
        printf("Ekko\n");
    else
        printf("Jinx\n");

    return 0;
}