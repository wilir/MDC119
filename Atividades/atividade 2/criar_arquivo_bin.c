#include <stdlib.h>
#include <stdio.h>

int main () {

    FILE *arq;

    arq = fopen("dados.bin", "rw");

        if (arq == NULL)
    {
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    if (feof(arq))
    {
        printf("Fim de arquivo encontrado\n");
        
        return 1;
    }

    printf("Pressione uma tecla para finalizar...\n");
    getchar();


    return 0;
}