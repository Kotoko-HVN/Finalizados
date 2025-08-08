#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX_RESULTADOS 1000

typedef struct {
    int linha;
    long long N;
    long long P;
} Resultado;

bool is_perfect_square(long long x) {
    long long s = sqrt(x);
    return s * s == x;
}

int main() {
    Resultado resultados[MAX_RESULTADOS];
    int total = 0;
    int L = 1;
    long long P;
    long long limite = 40000000;

    for (P = 1; P <= limite; P++) {
        if (P % 1000000 == 0) {
            printf("Verificando P = %lld...\n", P);
        }

        long long delta = 1 + 8 * P * P;

        if (is_perfect_square(delta)) {
            long long raiz = sqrt(delta);
            if ((raiz - 1) % 2 == 0) {
                long long N = (raiz - 1) / 2;

                if (total < MAX_RESULTADOS) {
                    resultados[total].linha = L;
                    resultados[total].N = N;
                    resultados[total].P = P;
                    total++;
                    L++;
                }
            }
        }
    }

    printf("\n===== MATEI A PAU =====\n");
    for (int i = 0; i < total; i++) {
        printf("LINHA %d: %lld casas -> padaria na casa %lld\n",
               resultados[i].linha,
               resultados[i].N,
               resultados[i].P);
    }

    return 0;
}
