/*
1) Observe o trecho de código abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);
*/

// Para esses exercicios, escolhi utilizar a linguagem de programação em C. Abaixo teremos o codigo funcional desse exemplo acima.

#include <stdio.h>

int main()
{
    int indice = 13;
    int soma = 0;
    int k = 0;
    while (k<indice)
    {
        k += 1;
        soma += k;
    }
    printf("%d\n",soma);
    return 0;
}


// Reposta = 91.