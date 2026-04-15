#include <stdio.h>

int main()
{
    float n1, n2;
   
    printf("Escolha um número: ");
    scanf("%f", &n1);
   
    printf("\nEscolha outro número: ");
    scanf("%f", &n2);
   
    if (n1 == n2) {
        printf("Valores Iguais");
    }
   
    else if (n1 > n2) {
        printf("O número %.2f", n1);
        printf(" é maior que %.2f", n2);
    }
   
    else {
        printf("O número %.2f", n2);
        printf(" é maior que %.2f", n1);
    }   
 
}
