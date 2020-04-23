#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[10];
    printf("Digite 10 numeros:\n");
    
    for (int i = 0; i<10; i++)
    {
        printf(" %i Numero: ", i+1);
        scanf("%i", &array[i]);
    }
    
    printf("Numeros Digitados:\n");
    
    for (int i = 0; i<10; i++)
    {
        printf(" %i ", array[i]);

    }
    printf("\n");
    return 0;
}
