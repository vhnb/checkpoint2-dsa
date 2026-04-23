#include <stdio.h>

int main()
{
    printf("===================================\n");
    printf("          Sistema Equipe 1         \n");
    printf("===================================\n");

    int valor;
    printf("Digite um número entre 1 a 6\n");
    scanf("%d", valor);

    switch (valor)
    {

    case 1:
        float nota1 = 0;
        printf("digite a sua primeira nota: \n");
        scanf("%f", &nota1);

        float nota2 = 0;
        printf("digite a sua segunda nota: \n");
        scanf("%f", &nota2);
        break;

    case 2:

        float media = (nota1 + nota2) / 2;
        break;

    case 3:

        if (media >= 6)
        {
            printf("Aluno aprovado\n");
        }
        else
        {
            printf("Aluno reprovado\n");
        }

        break;

    case 4:

        printf("A média é igual à: %f", media);
        break;

    case 5:

        float A, B, C;

        float calc;

        printf("f(x) = 2ax + b\n");

        printf("Digite o parâmetro para A: \n");

        scanf("%f", &A);

        break;
    default:
        break;
    }
}