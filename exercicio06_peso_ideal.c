#include <stdio.h>

int main()
{
    int sexo;
    float altura, peso_ideal;
    
    printf("\n 1 - Feminino\n 2 - Masculino\n");
    printf("Insira o seu sexo: ");
    scanf("%i", &sexo);
    
    switch (sexo) {
        case 1:
        printf("Insira sua altura: ");
        scanf("%f", &altura);
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O seu peso ideal é: %.2f", peso_ideal);
        break;
        
        case 2:
        printf("Insira sua altura: ");
        scanf("%f", &altura);
        peso_ideal = (72.7 * altura) - 58;
        printf("O seu peso ideal é: %.2f", peso_ideal);
        break;
        
        default:
        printf("Você inseriu um número inválido");
        break;
    }
    
    


    return 0;
}
