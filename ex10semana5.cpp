#include <stdio.h>
#include <stdbool.h>

void uniao(int A[], int B[], int nA, int nB, int resultado[], int *tamanhoResultado) {
    int index = 0;

    //Copia os elementos do vetor A para o resultado
    for (int i = 0; i < nA; i++) {
        resultado[index++] = A[i];
    }

    //Verifica se os elementos de B j� existem em A
    for (int i = 0; i < nB; i++) {
        bool encontrado = false;
        for (int j = 0; j < nA; j++) {
            if (B[i] == resultado[j]) {
                encontrado = true;
                break;
            }
        }
        //Se o elemento de B n�o estiver em A, incrementa ao resultado
        if (!encontrado) {
            resultado[index++] = B[i];
        }
    }

    *tamanhoResultado = index;
}

int main() {
    printf("Entre o n�mero de elementos do primeiro vetor: ");
    int nA;
    if (!scanf("%d", &nA)) { return 1; }

    int vetor1[nA];
    for (int i = 0; i < nA; i++) {
        printf("Valor para a posi��o %d: ", i);
        if (!scanf("%d", &vetor1[i])) { return 1; }
    }

    printf("Entre o n�mero de elementos do segundo vetor: ");
    int nB;
    if (!scanf("%d", &nB)) { return 1; }

    int vetor2[nB];
    for (int i = 0; i < nB; i++) {
        printf("Valor para a posi��o %d: ", i);
        if (!scanf("%d", &vetor2[i])) { return 1; }
    }

    int resultado[nA + nB]; //Para armazenar os elementos da uni�o
    int tamanhoResultado; //Para armazenar o tamanho do resultado
    uniao(vetor1, vetor2, nA, nB, resultado, &tamanhoResultado);

    printf("Uni�o dos vetores: ");
    for (int i = 0; i < tamanhoResultado; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}

