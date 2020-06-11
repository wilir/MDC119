#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    
    FILE *arq;

    arq = fopen("dados.txt", "rw");
    fclose(arq);

    if (arq == NULL)
    {
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    printf("Pressione uma tecla para finalizar ...\n");
    getchar();

    return 0;
}