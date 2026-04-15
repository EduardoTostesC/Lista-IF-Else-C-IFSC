#include <stdio.h>

int main()
{
    int idade, ano_nascimento;
    
    printf("Insira o seu ano de nascimento: ");
    scanf("%i", &ano_nascimento);
    
    idade = 2026 - ano_nascimento;

    if (idade < 16) {
        printf("\nVocê não pode votar");
    }
    else if ((idade >= 16 && idade < 18) || idade >= 70) {
        printf("Você pode votar\n");
        printf("O seu voto é facultativo");
    }
    else {
        printf("\nVocê pode votar");
        printf("\nO seu voto é obrigatorio");
    }

    return 0;
}
