#include <stdio.h>
#include <stdlib.h>

int main() {

    int horas, minutos, segundos;
    
    segundos = 5700;
    horas = segundos/3600;
    segundos = segundos%3600;
    minutos = segundos/60;
    segundos = segundos%60;
    
    printf("\n\n      %i:%i:%i      \n\n", horas, minutos, segundos);
    
    return 0;
}
