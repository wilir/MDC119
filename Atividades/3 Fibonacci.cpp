#include <stdio.h>
#include <stdlib.h>

int main() {

    int anterior, numero = 0, proximo = 1;
    
    for (int i = 0; i<10 ; i++)
    {
        printf(" %i ", numero);
        anterior = proximo;
        proximo += numero;
        numero = anterior;
    }
    return 0;
}
