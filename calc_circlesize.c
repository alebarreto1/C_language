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
          printf("\n\nEscolha o n�mero da op��o para iniciar o c�lculo.");
          printf("\n\nDigite zero para sair do sistema. \n");
            scanf("%i",&Escolha);

        }while(Escolha > 2);


        switch(Escolha)
        {

        case 0:
            printf("\n At� logo!\n");
            exit(1);
            break;

        case 1:
            printf("\nEscolha um n�mero para a base e outro para altura do tri�ngulo\n");
            Area();
            goto Retorno;
            break;

        case 2:
            printf("\nEscolha o raio da circunfer�ncia para calcular seu comprimento\n");
            Comprimento();
            goto Retorno;
            break;

        default:
            printf("\nPor favor, escolha uma opc�o v�lida\n");
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

        printf("\t\tM�QUINA DE C�LCULOS\n\n");

    for(i=0 ; i<50; i++)
    {
        printf("=");
    }
        printf ("\n\nSeja bem vindo(a)!");
        printf("\n\nPOR FAVOR, ESCOLHA UMA DAS OPC�ES ABAIXO: \n\n");

        printf("(1) �rea tri�ngulo:\n");
        printf("(2) Comprimento da Circunfer�ncia:\n\n");

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
        printf("\nA �rea do tri�ngulo �= %.2f\n\n", Resultado);
}

const float Pi = 3.141592;
void Comprimento()
{
    float x;
    scanf("%f", &x);


    float resultado = 2*Pi*x;
    printf("O comprimento da cincunfer�ncia � = %.4f\n\n\n", resultado);
}

