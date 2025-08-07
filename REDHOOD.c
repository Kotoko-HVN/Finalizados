#include <stdio.h>

int main() {
    int L = 1;
    long long P, N;
    long long limite = 400000000;

    for (P = 1; P <= limite; P++) {
        long long esquerda = 2 * P * P;

        for (N = P; N <= 2 * P; N++) {
            if (N * (N + 1) == esquerda) {
                printf("==========\nLINHA %d\n%lld casas\npadaria na casa %lld\n==========", L, N, P);
                L++;
                break;
            }
        }
    }

    return 0;
}
