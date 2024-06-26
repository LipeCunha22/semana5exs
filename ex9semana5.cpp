#include <stdio.h>
#include <stdbool.h>

void subtracao(int A[], int B[], int n, int resultado[], int *numElementosResultado) {
    *numElementosResultado = 0; // Inicializa o n�mero de elementos no resultado
    bool encontrado;
    for (int i = 0; i < n; i++) {
        encontrado = false;
        for (int j = 0; j < n; j++) {
            if (A[i] == B[j]) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            resultado[(*numElementosResultado)++] = A[i]; // Adiciona o elemento n�o comum ao resultado
        }
    }
}

int main() {
    printf("Entre o n�mero de elementos do vetor: ");
    int n;
    if (!scanf("%d", &n)) { return 1; }

    int vetor1[n];
    for (int i = 0; i < n; i++) {
        printf("Valor para a posi��o %d: ", i);
        if (!scanf("%d", &vetor1[i])) { return 1; }
    }

    printf("Entre o n�mero de elementos do segundo vetor: ");
    if (!scanf("%d", &n)) { return 1; }

    int vetor2[n];
    for (int i = 0; i < n; i++) {
        printf("Valor para a posi��o %d: ", i);
        if (!scanf("%d", &vetor2[i])) { return 1; }
    }

    int resultado[n]; // Para armazenar os elementos n�o comuns
    int numElementosResultado; // Para armazenar o n�mero de elementos no resultado
    subtracao(vetor1, vetor2, n, resultado, &numElementosResultado);

    printf("A - B = { ");
    for (int i = 0; i < numElementosResultado; i++) {
        printf("%d ", resultado[i]);
    }
    printf("}\n");

    return 0;
}


