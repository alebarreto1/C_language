#include <locale.h>

void main()
{
    setlocale (LC_ALL, "Portuguese");
    int Escolha;

Retorno:
    printf("\n\n\n\n");
    Menu();
    system("color 0A");

        do{
          printf("\nEscolha o n�mero da op��o para iniciar o c�lculo.");
          printf("\nDigite zero para sair do sistema \n");
            scanf("%i",&Escolha);

        }while(Escolha > 6);


        switch(Escolha)
        {

        case 0:
            printf("\n At� logo!\n");
            exit(1);
            break;

        case 1:
            printf("\nEscolha dois n�meros para a soma\n");
            Soma();
            goto Retorno;
            break;

        case 2:
            printf("\nEscolha dois n�meros para a subtra��o\n");
            Subtracao();
            goto Retorno;
            break;

        case 3:
            printf("\nEscolha dois n�meros para a divis�o\n");
            Divisao();
            goto Retorno;
            break;

        case 4:
            printf("\nEscolha dois n�meros para a multiplica��o\n");
            Multiplicacao();
            goto Retorno;
            break;

        case 5:
            printf("\nEscolha dois n�meros para calcular a �rea\n");
            Area();
            goto Retorno;
            break;

case 6:
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

    for(i=0 ; i<30; i++)
    {
        printf("=");
    }
    printf("\n\n");

    printf("     M�QUINA DE C�LCULOS\n\n");

    for(i=0 ; i<30; i++)
    {
        printf("=");
    }
    printf ("\n\nSeja bem vindo(a)!");
    printf("\n\nPOR FAVOR, ESCOLHA UMA DAS OPC�ES ABAIXO: \n\n");

    printf("(1) Soma:\n");
    printf("(2) Subtra��o:\n");
    printf("(3) Divis�o:\n");
    printf("(4) Multiplica��o:\n");
    printf("(5) �rea tringulo:\n");
    printf("(6) Comprimento da Circunfer�ncia:\n\n");

    for(i=0; i<30; i++)
    {
        printf("=");
    }
}

void Soma()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

    int Resultado = x+y;
    printf("\nA soma entre os dois n�meros �= %i\n\n", Resultado);
}

void Subtracao()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

    int Resultado = x-y;
    printf("\nA subtra��o entre os dois n�meros �= %i\n\n", Resultado);
}

void Divisao()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

    if(y != 0)
    {
        float Resultado = (float)x/y;
        printf("\nA divis�o entre os dois n�meros � = %.4f\n\n", Resultado);
        }else{
        printf("\nAten��o. N�o se pode dividir por 0");}
}

void Multiplicacao()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

        float Resultado = (float) x*y;
        printf("\nA multiplica��o entre os dois n�meros � = %.4f\n\n", Resultado);
}

void Area()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

        float Resultado = (float)(x*y)/2;
        printf("\nA �rea do tri�ngulo �= %.4f\n\n", Resultado);
}

const float Pi = 3.141592;
void Comprimento()
{
    float x;
    scanf("%f", &x);


    float resultado = 2*Pi*x;
    printf("O comprimento da cincunfer�ncia � = %.4f\n\n\n", resultado);

}
