#include <stdio.h>
#include <stdlib.h>

// Função de comparação para o qsort
int compara(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int v[30] = {
        42, 7, 13, 99, 23, 54, 31, 67, 88, 12,
        5,  3, 77, 10, 16, 45, 81, 33, 22, 39,
        70, 66, 17, 2, 29, 91, 60, 27, 100, 8
    };
    int n = 30, alvo, passos, i, esq, dir, meio;

    printf("Digite o codigo do produto a buscar: ");
    scanf("%d", &alvo);

    // -------- Busca Linear --------
    passos = 0;
    int idx = -1;
    for (i = 0; i < n; i++) {
        passos++;
        if (v[i] == alvo) {
            idx = i;
            break;
        }
    }
    if (idx == -1)
        printf("[Linear] Codigo %d nao encontrado. Passos: %d\n", alvo, passos);
    else
        printf("[Linear] Codigo %d encontrado no indice %d. Passos: %d\n", alvo, idx, passos);

    // -------- Ordenação --------
    qsort(v, n, sizeof(int), compara);

    // -------- Busca Binária --------
    passos = 0;
    idx = -1;
    esq = 0; dir = n - 1;
    while (esq <= dir) {
        passos++;
        meio = (esq + dir) / 2;
        if (v[meio] == alvo) { idx = meio; break; }
        else if (v[meio] < alvo) esq = meio + 1;
        else dir = meio - 1;
    }
    if (idx == -1)
        printf("[Binaria] Codigo %d nao encontrado. Passos: %d\n", alvo, passos);
    else
        printf("[Binaria] Codigo %d encontrado no indice %d. Passos: %d\n", alvo, idx, passos);

    return 0;
}
