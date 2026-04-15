#include <stdio.h>

int main()
{
    int senha;
    
    printf("Insira uma senha de 4 dígitos para abrir o cofre (Ex: 1456): ");
    scanf("%i", &senha);

    if (senha == 1234) {
        printf("ACESSO PERMITIDO\n");
    }
    
    else {
        printf("ACESSO NEGADO\n");
    }

    return 0;
}
