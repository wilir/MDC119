#include <stdio.h>
#include <stdlib.h>

int main() {

    int ano;
    printf("\nDigite um ano: ");
        scanf("%i", &ano);
    if ((ano%4 == 0 && ano%100!=0) || ano%400==0) {
        printf("\nAno %i � bissexto\n", ano);
    }
    else
    {
        printf("\n O ano %i n�o � bissexto.\n", ano);
    }
    return 0;
}
