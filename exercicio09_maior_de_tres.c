#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Insira um numero: ");
    scanf("%i", &n1);

    printf("Insira outro numero: ");
    scanf("%i", &n2);

    printf("Insira outro numero: ");
    scanf("%i", &n3);
    
    if (n1 > n2 && n1 > n3) {
        printf("O maior numero e: %i\n", n1);
    }
    else if (n2 > n1 && n2 > n3) {
        printf("O maior numero e: %i\n", n2);
    }
    else {
        printf("O maior numero e: %i\n", n3);
    }

    return 0;
}
