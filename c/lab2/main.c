#include <stdio.h>
#include <math.h>
#include <float.h>

int main() {
    int k, y, z;
    double p, x;

    // Entrada de dados
    printf("Quantidade desejada (k): ");
    scanf("%d", &k);

    printf("Preco unitario (P): ");
    scanf("%lf", &p);

    printf("Desconto fixo da Loja A (X%%): ");
    scanf("%lf", &x);

    printf("Promocao Loja B - pague Y: ");
    scanf("%d", &y);

    printf("Promocao Loja B - leve Z: ");
    scanf("%d", &z);

    // Loja A
    double total_a = k * p * (1 - x / 100);

    // Loja B
    double min_custo_b = DBL_MAX; // Inicializa com o maior valor possível
    int max_pacotes = k / z + 2;

    for (int pacotes = 0; pacotes <= max_pacotes; pacotes++) {
        int unidades_promo = pacotes * z;
        int faltando = k - unidades_promo;
        if (faltando < 0) faltando = 0;

        double custo = pacotes * y * p + faltando * p;
        if (custo < min_custo_b) {
            min_custo_b = custo;
        }
    }

    // Resultados
    printf("Custo total na Loja A: R$ %.2lf\n", total_a);
    printf("Custo total na Loja B: R$ %.2lf\n", min_custo_b);

    if (total_a < min_custo_b) {
        printf("Mais vantajoso comprar na Loja A.\n");
    } else if (min_custo_b < total_a) {
        printf("Mais vantajoso comprar na Loja B.\n");
    } else {
        printf("Ambas as lojas oferecem o mesmo custo.\n");
    }

    return 0;
}
