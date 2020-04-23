#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    
    printf("Ordem correta:\n");
    for (int i = 0; i<10; i++)
    {
        printf(" %i ", array[i]);
    }
    
    printf("\nOrdem inversa:\n");
    for (int i = 9; i>=0; i--)
    {
        printf(" %i ", array[i]);
    }

    return 0;
}
