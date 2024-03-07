/*Exercicio
 Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número,
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
*/

// Para esses exercicios, escolhi utilizar a linguagem de programação em C. Abaixo teremos o codigo funcional desse exemplo acima.
// Porem vou tentar uma abordagem diferente. Farei utilizando Funções e tanbem ponteiro com alocação dinamica de memoria.

#include <stdio.h>
#include <stdlib.h> // Para utilizar a função malloc

// Função para calcular a sequência de Fibonacci até um determinado limite
int* Sequencia(int max) {
    int* sequencia = (int*)malloc(sizeof(int) * max); // Alocar memória dinamicamente
    
    sequencia[0] = 0;
    sequencia[1] = 1;

    int i = 2;
    while (sequencia[i-1] + sequencia[i-2] <= max) {
        sequencia[i] = sequencia[i-1] + sequencia[i-2];
        i++;
    }

    return sequencia;
}

// Função para verificar se um número está na sequência de Fibonacci
int verifica(int num, int* sequencia) {
    int i = 0;
    while (sequencia[i] < num) {
        if (sequencia[i] == num) {
            return 1;
        }
        i++;
    }
    return 0;
}
 
int main() {
    int numero;
    printf("Escolha um número para verificar: ");
    scanf("%d", &numero);

    int* sequencia_max = Sequencia(numero);
    
    if (verifica(numero, sequencia_max)) {
         printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    }
    else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    // Imprimir a sequência de Fibonacci
    printf("Sequência de Fibonacci até %d: ", numero);
    for (int i = 0; sequencia_max[i] <= numero; i++) {
        printf("%d ", sequencia_max[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(sequencia_max);

    return 0;
}
