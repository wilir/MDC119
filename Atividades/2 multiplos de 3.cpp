#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 1; i<101; i++) {
        if (i%3 == 0)
        {
            printf(" %i ", i);
        }
    }
    printf("\n\n");
    return 0;
}
