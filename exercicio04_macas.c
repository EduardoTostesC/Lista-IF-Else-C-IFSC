#include <stdio.h>

int main()
{
    int quantidade;
    float valor;
    
    printf("Valor unitario da maça:\n");
    printf("Menos de uma duzia: R$ 0.30\n");
    printf("Uma duzia ou mais: R$ 0.25\n");
    printf("Quantas macas deseja comprar: ");
    scanf("%i", &quantidade);

    if (quantidade >= 12) {
        valor = quantidade * 0.25;
    }
    
    else {
        valor = quantidade * 0.30;
    }
    
    printf("\nO valor da compra é: %.2f", valor);
    
    return 0;
}
