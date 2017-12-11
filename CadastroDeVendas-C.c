#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct venda
{
    char nameVend[200];
    char CPF[200];
    char numVend[200];
    char qtdVend[200];
    char valorvend[200];
    int cod;
}logP[200];

struct cadastro
{
    char CPF[200];
    char telefone[200];
    char nome[200];
    char endereco[200];
    char data[200];
    int vazio,cod;
    struct venda vendaVend;
   
}log[200];

/*Funçoes do sistema*/
int verifica_pos(void);
int verifica_cod( int cod );
int opt;
void cadastroV(int cod,int pos);
void list();
void consultaCod (void);

int main(void){

    int i,Opcao,OpcaoVendedor,posicao,retorno;
    int codaux;
    do
    {
        printf("1 - Cadastrar Novo Vendedor\n");
        printf("2 - Vendedor\n");
        printf("3 - Cadastrar Venda\n");
        printf("4 - Sair\n");

        printf("\nSelecione uma opcao por favor: ");
        scanf("%d", &Opcao);
        getchar();
        if (Opcao == 1)
        {
            printf("\nVoce selecionou a opcao 1 - Cadastrar Novo Vendedor\n");
            posicao = verifica_pos();

                if ( posicao != -1 )
                {

                    printf("\nEntre com um codigo de 1 a 200 para seu cadastro: \n");
                    scanf("%d",&codaux);fflush(stdin);

                    retorno = verifica_cod( codaux );

                    if ( retorno == 1 )
                        cadastroV( codaux, posicao );
                    else{
                        printf("\nCodigo ja existente ou invalido pressione enter para voltar ao menu principal\n");
                        getchar();
                        system("cls");
                        main();
                    }

                }
                else
                    printf("\nNao e possivel realizar mais cadastros!\n");

                break;
 
        }
        else if (Opcao == 2)
        {
            system("cls");
            do{
            printf("Voce selecionou a opcao 2 - Vendedor\n\n");
            printf("1 - Pesquisar vendedor por codigo\n");
            printf("2 - Listar todos os vendedores\n");
            printf("3 - Voltar ao menu principal\n");

            printf("\nSelecione uma opcao por favor: ");
            scanf("%d", &OpcaoVendedor);
            getchar();
                 if(OpcaoVendedor == 1){
                    consultaCod();
                }
                else if(OpcaoVendedor == 2){
                    list();
                }
                else if(OpcaoVendedor == 3){
                    printf("Voce selecionou voltar ao menu principal, pressione ENTER para continuar");
                    getchar();
                    system("cls");
                }
                else
                    printf("Opcao Invalida\n\n");
    }while(OpcaoVendedor =!3 || OpcaoVendedor > 3 || OpcaoVendedor < 0 || OpcaoVendedor == 0);
        }
        else if (Opcao == 3)
        {
            printf("Voce selecionou a opcao 3 - Cadastrar Venda\n");
						/*Ainda tem que implementar*/
        }
        else if (Opcao == 4)
        {
            printf("Voce selecionou a opcao 6 - Sair\n");
        }
        else{
            printf("Opcao invalida, favor pressione enter para voltar ao menu principal");
            getchar();
            system("cls");
        }
        }    while (Opcao != 4 || Opcao < 4);

} 

void list(){ 

    int i,j;   
    for( i=0; i<200; i++ ){
        if(log[i].cod!=NULL){
            printf("\nCodigo do vendedor: %d \nNome do vendedor: %s\nCPF do vendedor: %s\nEndereco do vendedor: %s\nTelefone do vendedor: %s\n\n", log[i].cod,log[i].nome,log[i].CPF,log[i].endereco,log[i].telefone);
    }
}
    printf("Pressione enter para volta ao menu principal");
    getchar();
    system("cls");

}

void cadastroV(int cod, int pos){
    int i;
    do{
    pos = verifica_pos();
    log[pos].cod = cod;
        printf("\nDigite o nome do vendedor: ");
        gets(log[pos].nome);
        printf("\nDigite o CPF do vendedor: ");
        gets(log[pos].CPF);
        printf("\nDigite o Endereco do vendedor: ");
        gets(log[pos].endereco);
        printf("\nDigite o Telefone do vendedor: ");
        gets(log[pos].telefone);
				printf("\n\nPressione Enter para finalizar.");
        log[pos].vazio = 1;
        opt ==1;
        getchar();   
    }while(opt==1);
    system("cls");
    main();

} 

int verifica_pos( void )
{
    int cont = 0;

    while ( cont <= 200 )
    {

        if ( log[cont].vazio == 0 )
            return(cont);

        cont++;

    }

    return(-1);

}

int verifica_cod( int cod )
{
    int cont = 0;

    while ( cont <= 200 )
    {
        if ( log[cont].cod == cod )
            return(0);

        cont++;
    }

    return(1);

}

void consultaCod (void)
{
    int cont = 0, cod;

    printf("\nEntre com o codigo\n");
    scanf("%d",&cod);
    fflush(stdin);
    system("cls");

    while ( cont <= 200 )
    {

        if (log[cont].cod==cod)
        {
            if (log[cont].vazio==1)
            {
               
                printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\n\n", log[cont].cod,log[cont].nome,log[cont].CPF,log[cont].endereco,log[cont].telefone);
               

                system ("pause");

                system("cls");

                break;

            }
        }

        cont++;

        if ( cont > 200 ){
            printf("\nCodigo nao encontrado, pressione enter para volar ao menu principal\n");
            getchar();
            system("cls");
        }

    }
} 
