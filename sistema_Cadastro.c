#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 200

struct dados
{
    int codigo;
    int ano;
    int status;
    int prazo;
    char titulo[60];
    char descricao[60];
    char gerente[60];
    char cliente[60];
    float valor;
};
int op, i, escolha;
struct dados projeto [TAM];

int main(){
    setlocale (LC_ALL, "Portuguese");
    retorno:
        menu();

        do{printf("\n\n*Escolha uma opção: ");
                scanf("%i", &op);
          }while (op > 7);
    switch (op){

    case 1:
        cadastro();
        goto retorno;
        break;

    case 2:
        listar_Todos();
        goto retorno;
        break;

    case 3:
        afazer();
        goto retorno;
        break;

    case 4:
        fazendo();
        goto retorno;
        break;

    case 5:
        concluido();
        goto retorno;
        break;

    case 6:
        fazer_Fazendo();
        goto retorno;
        break;

    case 7:
        printf("\n\nSaindo do Sistema de Cadastro de Projetos.\n");
        exit(1);
        break;

    default:
        printf("\nEscolha uma opção válida:\n");
        goto retorno;
        break;
    }return(0);
}
void menu(){
        printf("****** SISTEMA DE CADASTRO DE PROJETOS ******\n");
        printf("\n1 - Inserir Projetos.");
        printf("\n2 - Listar Todos os Projetos.");
        printf("\n3 - Listar Todos os Projetos com Status - A Fazer.");
        printf("\n4 - Listar Todos os Projetos com Status - Fazendo.");
        printf("\n5 - Listar Todos os Projetos com Status - Concluído.");
        printf("\n6 - Listar Todos os Projetos com Status - A Fazer e Todos os Projetos com Status - Fazendo.");
        printf("\n7 - Sair");
        printf("\n\n********************************************************************************************\n");
        fflush(stdin);
}
void cadastro(){
    system("cls");
    for (i=0; i<TAM; i++){
    printf("\n** DADOS DO PROJETO ** Código projeto: %d", i+1);
    projeto[i].codigo = i+1;
    fflush(stdin);
    printf("\nTítulo do Projeto: ");
    scanf("%100[^\n]s", &projeto[i].titulo);
    fflush(stdin);
    printf("\nStatus do Projeto: [1]A Fazer  [2]Fazendo  [3]Concluído: ");
    scanf("%d", &projeto[i].status);
    fflush(stdin);
    printf("\nBreve Descrição do Projeto: ");
    scanf("%100[^\n]s", &projeto[i].descricao);
    fflush(stdin);
    printf("\nAno de Início do Projeto: ");
    scanf("%d", &projeto[i].ano);
    fflush(stdin);
    printf("\nPrazo em Meses para Conclusão: ");
    scanf("%d", &projeto[i].prazo);
    fflush(stdin);
    printf("\nGerente do Projeto: ");
    scanf("%100[^\n]s", &projeto[i].gerente);
    fflush(stdin);
    printf("\nCliente do Projeto: ");
    scanf("%100[^\n]s", &projeto[i].cliente);
    fflush(stdin);
    printf("\nValor do Projeto: ");
    scanf("%f", &projeto[i].valor);
    fflush(stdin);
    do{
        printf("\nDeseja cadastrar outro projeto? [1]Sim  [2]Não\n");
        scanf("%d", &escolha);
        fflush(stdin);

    }while ((escolha!= 2) && (escolha !=1));
        if(escolha == 2 ){
            fflush(stdin);
            menu();
            system("cls");
            break;
        }
        if (escolha == 1){
            fflush(stdin);
            system("cls");}
        }
    }
void imprimir(){
    printf("\nTítulo do Projeto: %s", projeto[i].titulo);
    printf("\nStatus do Projeto: [1]A Fazer  [2]Fazendo  [3]Concluído: %d", projeto[i].status);
    printf("\nBreve Descrição do Projeto: %s", projeto[i].descricao);
    printf("\nAno de Início do Projeto: %d", projeto[i].ano);
    printf("\nPrazo em Meses para Conclusão Total: %d", projeto[i].prazo);
    printf("\nGerente do Projeto: %s", projeto[i].gerente);
    printf("\nCliente do Projeto: %s", projeto[i].cliente);
    printf("\nValor do Projeto: R$%.2f", projeto[i].valor);
    printf("\n****************************************************************\n\n");
    fflush(stdin);
}
void listar_Todos(){
    system("cls");
    printf("\n* Listar Todos os Projetos: \n");
        for (i=0; i<TAM; i++){
            if((projeto[i].status > 0) && (projeto[i].status <= 3)){
                    printf("\nCódigo %d", projeto[i].codigo);
                    imprimir(listar_Todos);
            }
        }
}
void afazer(){
    system("cls");
    printf("\n** Listar Todos os Projetos com Status - A Fazer: \n");
        for (i=0; i<TAM; i++){
            if((projeto[i].status > 0) && (projeto[i].status <= 1)){
                    imprimir(afazer);
            }
        }
}
void fazendo(){
    system("cls");
    printf("\n** Listar Todos os Projetos com Status - Fazendo: \n");
        for (i=0; i<TAM; i++){
            if((projeto[i].status > 1) && (projeto[i].status <= 2)){
                   imprimir(fazendo);
             }
        }
}
void concluido(){
    system("cls");
    printf("\nListar Todos os Projetos com Status - Concluído: \n");
        for (i=0; i<TAM; i++){
            if((projeto[i].status > 2) && (projeto[i].status <= 3)){
                    imprimir(concluido);
             }
        }
}
void fazer_Fazendo(){
    system("cls");
    printf("\nListar, caso existam, Projetos com Status - A Fazer e Projetos com Status - Fazendo: \n");
        for (i=0; i<TAM; i++){
            if((projeto[i].status >= 1) && (projeto[i].status <= 2)){
                    imprimir(fazer_Fazendo);
             }
        }
}






