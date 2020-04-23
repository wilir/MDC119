#include <stdio.h>

int main(){
	
    
	struct carro_t{
        char marca[10];
        int ano;
        float valor;
    };

    float valor;
    int carro;
    int anosdecorridos;

    struct carro_t carro_s;

    printf("Marca do seu carro:\n> ");
    fflush(stdin);
    fgets(carro_s.marca,10,stdin);

    printf("Ano do seu carro:\n> ");
    fflush(stdin);
    scanf("%i", &carro);
    carro_s.ano = carro;

    printf("Valor do seu  carro:\n> ");
    fflush(stdin);
    scanf("%f", &valor);

    carro_s.valor = valor;

    float valor_depreciado,novovalor;

    novovalor = carro_s.valor - (2020 - carro_s.ano)*0.01*carro_s.valor;
    valor_depreciado = carro_s.valor-novovalor;

    anosdecorridos = 2020-carro_s.ano;

    printf("\nO valor da depreciacao da/o:\n> %sAo longo dos %i anos decorridos foi:\n> R$%.3f\nO novo valor do carro e:\n> R$%.3f\n",carro_s.marca,anosdecorridos,valor_depreciado,novovalor);
 
    return 0;
}
