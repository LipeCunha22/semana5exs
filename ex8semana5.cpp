#include <stdio.h>
#include <stdbool.h>

void interseccao(int A[], int B[], int n, int resultado[], int *numElementosResultado) {
    *numElementosResultado = 0; // Inicializa o número de elementos no resultado
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i] == B[j]) {
                resultado[(*numElementosResultado)++] = A[i]; // Adiciona o elemento em comum ao resultado
                break; // Uma vez que o elemento é encontrado, saia do loop interno
            }
        }
    }
}

int main() {
    printf("Entre o número de elementos do vetor: ");
    int n;
    if (!scanf("%d", &n)) { return 1; }

    int vetor1[n];
    for (int i = 0; i < n; i++) {
        printf("Valor para a posição %d: ", i);
        if (!scanf("%d", &vetor1[i])) { return 1; }
    }

    printf("Entre o número de elementos do segundo vetor: ");
    if (!scanf("%d", &n)) { return 1; }

    int vetor2[n];
    for (int i = 0; i < n; i++) {
        printf("Valor para a posição %d: ", i);
        if (!scanf("%d", &vetor2[i])) { return 1; }
    }

    int resultado[n]; // Para armazenar os elementos em comum
    int numElementosResultado; // Para armazenar o número de elementos no resultado
    interseccao(vetor1, vetor2, n, resultado, &numElementosResultado);

    printf("Elementos em comum nos vetores: ");
    for (int i = 0; i < numElementosResultado; i++) {
        printf("%d, ", resultado[i]);
    }
    printf("\n");

    return 0;
}

