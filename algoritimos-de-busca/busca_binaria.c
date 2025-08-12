#include <stdio.h>
#include <string.h>
int busca_linear_rg(const char* rgs[], int n, const char* alvo) {
    for (int i = 0; i < n; i++) {
        if (strcmp(rgs[i], alvo) == 0) return i;
    }
    return -1;
}
int busca_binaria_rg(const char* rgs[], int n, const char* alvo) {
    int ini = 0, fim = n - 1;
    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2;
        int cmp = strcmp(rgs[meio], alvo);
        if (cmp == 0) return meio;
        if (cmp < 0) ini = meio + 1;
        else fim = meio - 1;
    }
    return -1;
}
int main() {
    // Exemplo: vetor ORDENADO lexicograficamente
    const char* rgs_ordenados[] = {
        "012345678", "123456789", "234567890",
        "345678901", "456789012"
    };
    // Exemplo: vetor NÃO ordenado
    const char* rgs_nao_ordenados[] = {
        "456789012", "012345678", "345678901",
        "234567890", "123456789"
    };
    int n = 5;
    char alvo[20];
    printf("Digite o RG a buscar (somente numeros): ");
    scanf("%19s", alvo);
    // Linear (funciona desordenado)
    int idx_linear = busca_linear_rg(rgs_nao_ordenados, n, alvo);
    if (idx_linear == -1) {
        printf("[Linear] RG %s nao encontrado (vetor NAO ordenado).\n", alvo);
    } else {
        printf("[Linear] RG %s encontrado no indice %d (vetor NAO ordenado).\n", alvo, idx_linear);
    }

    // Binária (requer ordenação)
    int idx_bin = busca_binaria_rg(rgs_nao_ordenados, n, alvo);
    if (idx_bin == -1) {
        printf("[Binaria] RG %s nao encontrado (vetor ORDENADO).\n", alvo);
    } else {
        printf("[Binaria] RG %s encontrado no indice %d (vetor ORDENADO).\n", alvo, idx_bin);
    }
    return 0;
}