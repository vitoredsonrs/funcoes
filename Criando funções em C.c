#include <stdio.h>
#include <string.h>
#include <math.h>

void somar();
void subtrair();
void menu();
void menu()
{
    system("cls");
    printf("\n0 - Finalizar");
    printf("\n1 - Somar");
    printf("\n2 - Subtrair");
    printf("\nOpção escolhida: ");
    
}

void somar()
{
    float numero1, numero2;
    fflush(stdin);
    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);
    fflush(stdin);
    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);
    printf("Resultado: %.2f", numero1 + numero2);
}
void subtrair()
{
    float numero1, numero2;
    fflush(stdin);
    printf("Digite o primeiro valor: ");
    scanf("%f", &numero1);
    fflush(stdin);
    printf("Digite o segundo valor: ");
    scanf("%f", &numero2);
    printf("Resultado: %.2f", numero1 - numero2);
    
}

main()
{
    int opcao;

    while (opcao != 0)
    {
        menu();
        
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            somar();
            break;
        case 2:
            subtrair();
            break;
        default:
            break;
        }
        getch();
    }
}