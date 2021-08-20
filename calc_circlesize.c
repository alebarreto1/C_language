#include <locale.h>

void main()
{
    setlocale (LC_ALL, "Portuguese");
    int Escolha;

Retorno:
    printf("\n\n");
    Menu();
    system("color 0A");

        do{
          printf("\n\nEscolha o número da opção para iniciar o cálculo.");
          printf("\n\nDigite zero para sair do sistema. \n");
            scanf("%i",&Escolha);

        }while(Escolha > 2);


        switch(Escolha)
        {

        case 0:
            printf("\n Até logo!\n");
            exit(1);
            break;

        case 1:
            printf("\nEscolha um número para a base e outro para altura do triângulo\n");
            Area();
            goto Retorno;
            break;

        case 2:
            printf("\nEscolha o raio da circunferência para calcular seu comprimento\n");
            Comprimento();
            goto Retorno;
            break;

        default:
            printf("\nPor favor, escolha uma opcão válida\n");
            goto Retorno;
            break;
            }
}

void Menu()
{
    int i;

    for(i=0 ; i<50; i++)
    {
        printf("=");
    }
        printf("\n\n");

        printf("\t\tMÁQUINA DE CÁLCULOS\n\n");

    for(i=0 ; i<50; i++)
    {
        printf("=");
    }
        printf ("\n\nSeja bem vindo(a)!");
        printf("\n\nPOR FAVOR, ESCOLHA UMA DAS OPCÕES ABAIXO: \n\n");

        printf("(1) Área triângulo:\n");
        printf("(2) Comprimento da Circunferência:\n\n");

    for(i=0; i<50; i++)
    {
        printf("=");
    }
}


void Area()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

        float Resultado = (float)(x*y)/2;
        printf("\nA área do triângulo é= %.2f\n\n", Resultado);
}

const float Pi = 3.141592;
void Comprimento()
{
    float x;
    scanf("%f", &x);


    float resultado = 2*Pi*x;
    printf("O comprimento da cincunferência é = %.4f\n\n\n", resultado);
}

