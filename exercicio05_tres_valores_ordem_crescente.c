#include <stdio.h>

int main()
{
    int n1, n2, n3, aux;
    
    printf("Insira um valor inteiro: ");
    scanf("%i", &n1);
    printf("\nInsira outro valor inteiro: "); 
    scanf("%i", &n2);
    
    if (n1 == n2){
        printf("\nVocê inseriu valores iguais!");
        return 0;
    }
    
    printf("\nInsira outro valor inteiro: ");
    scanf("%i", &n3);
    
    if (n3 == n2 || n3 == n1) {
        printf("\nVocê inseriu valores iguais!");
        return 0;
    }
    
    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    
    if (n1 > n3) {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    
    if (n2 > n3) {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    
    printf("%i %i %i", n1, n2, n3);


    return 0;
}
