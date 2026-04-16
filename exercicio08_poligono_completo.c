#include <stdio.h>

int main()
{
    int lados;
    float medida, area;

    printf("3 - TRIANGULO\n");
    printf("4 - QUADRADO\n");
    printf("5 - PENTAGONO\n");
    printf("Insira o numero de lados do poligono: ");
    scanf("%d", &lados);

    printf("\nInsira a medida do lado em cm: ");
    scanf("%f", &medida);

    switch (lados) {
        case 3:
            printf("TRIANGULO\n");
            area = (medida * medida * 1.732) / 4;
            printf("Area: %.2f\n", area);
            break;

        case 4:
            printf("QUADRADO\n");
            area = medida * medida;
            printf("Area: %.2f\n", area);
            break;

        case 5:
            printf("PENTAGONO\n");
            break;

        default:
            if (lados < 3) {
                printf("NAO E UM POLIGONO\n");
            } else {
                printf("POLIGONO NAO IDENTIFICADO\n");
            }
            break;
    }

    return 0;
}
