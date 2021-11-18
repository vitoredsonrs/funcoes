#include <stdio.h>
#include <string.h>
#include <math.h>

void somar();
void subtrair();
void menu();
void menu()
{
    system("cls");
    printf("\n1 - Somar");
    printf("\n2 - Subtrair");
}

void somar()
{
    float n1, n2;
    fflush(stdin);
    scanf("%f", &n1);
    fflush(stdin);
    scanf("%f", &n2);
    printf("%f", n1 + n2);
}
void subtrair()
{
    float n1, n2;
    fflush(stdin);
    scanf("%f", &n1);
    fflush(stdin);
    scanf("%f", &n2);
    printf("%f", n1 - n2);
}

main()
{
    int op;

    while (op != 0)
    {
        menu();
        scanf("%d", &op);

        switch (op)
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

/*Aqui vem minha lista de funções*/
