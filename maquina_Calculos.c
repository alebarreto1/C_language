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
          printf("\nEscolha o número da opção para iniciar o cálculo.");
          printf("\nDigite zero para sair do sistema \n");
            scanf("%i",&Escolha);

        }while(Escolha > 6);


        switch(Escolha)
        {

        case 0:
            printf("\n Até logo!\n");
            exit(1);
            break;

        case 1:
            printf("\nEscolha dois números para a soma\n");
            Soma();
            goto Retorno;
            break;

        case 2:
            printf("\nEscolha dois números para a subtração\n");
            Subtracao();
            goto Retorno;
            break;

        case 3:
            printf("\nEscolha dois números para a divisão\n");
            Divisao();
            goto Retorno;
            break;

        case 4:
            printf("\nEscolha dois números para a multiplicação\n");
            Multiplicacao();
            goto Retorno;
            break;

        case 5:
            printf("\nEscolha dois números para calcular a área\n");
            Area();
            goto Retorno;
            break;

case 6:
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

    for(i=0 ; i<30; i++)
    {
        printf("=");
    }
    printf("\n\n");

    printf("     MÁQUINA DE CÁLCULOS\n\n");

    for(i=0 ; i<30; i++)
    {
        printf("=");
    }
    printf ("\n\nSeja bem vindo(a)!");
    printf("\n\nPOR FAVOR, ESCOLHA UMA DAS OPCÕES ABAIXO: \n\n");

    printf("(1) Soma:\n");
    printf("(2) Subtração:\n");
    printf("(3) Divisão:\n");
    printf("(4) Multiplicação:\n");
    printf("(5) Área tringulo:\n");
    printf("(6) Comprimento da Circunferência:\n\n");

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
    printf("\nA soma entre os dois números é= %i\n\n", Resultado);
}

void Subtracao()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

    int Resultado = x-y;
    printf("\nA subtração entre os dois números é= %i\n\n", Resultado);
}

void Divisao()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

    if(y != 0)
    {
        float Resultado = (float)x/y;
        printf("\nA divisão entre os dois números é = %.4f\n\n", Resultado);
        }else{
        printf("\nAtenção. Não se pode dividir por 0");}
}

void Multiplicacao()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

        float Resultado = (float) x*y;
        printf("\nA multiplicação entre os dois números é = %.4f\n\n", Resultado);
}

void Area()
{
    int x,y;
    scanf("%i", &x);
    scanf("%i", &y);

        float Resultado = (float)(x*y)/2;
        printf("\nA área do triângulo é= %.4f\n\n", Resultado);
}

const float Pi = 3.141592;
void Comprimento()
{
    float x;
    scanf("%f", &x);


    float resultado = 2*Pi*x;
    printf("O comprimento da cincunferência é = %.4f\n\n\n", resultado);

}
