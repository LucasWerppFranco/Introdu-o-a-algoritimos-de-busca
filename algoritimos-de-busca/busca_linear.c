// arquivo: busca_linear.c
#include <stdio.h>
int busca_linear(int v[], int n, int alvo) {
    for (int i = 0; i < n; i++) {
        if (v[i] == alvo) {
            return i; // índice encontrado
        }
    }
    return -1; // não encontrado
}
int main() {
    int v[] = {42, 7, 13, 99, 7, 23};
    int n = sizeof(v)/sizeof(v[0]);
    int alvo;
    printf("Digite o valor a buscar (linear): ");
    scanf("%d", &alvo);
    int idx = busca_linear(v, n, alvo);
    if (idx == -1) {
        printf("Valor %d nao encontrado.\n", alvo);
    } else {
        printf("Valor %d encontrado no indice %d.\n", alvo, idx);
    }
    return 0;
}
