#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int chamarMenu( menu ){
	/*switch menu*/
	  switch ( menu )
	  {
	     case 1 :
	       printf ("\n-------	Selecionou o menu de cadastro de vendedor	---------\n");
	       /*Funcao chama Cadastrar Vendedor*/
				 cadastrarVendedor();
	     break;
	     
	     case 2 :
	       printf ("\n-------	Selecionou o menu de cadastro de vendas	---------\n");
	       /*Funcao chama Cadastrar Venda*/
	     break;
	     
	     case 3 :
	       printf ("\n-------	Selecionou o menu de consulta de vendas de um vendedor em determinado mes	---------\n");
	       /*Funcao chama Cadastrar Venda*/
	     break;

			 case 4 :
	       printf ("\n-------	Selecionou o menu de consulta do total de vendas em determinado mes	---------\n");
	       /*Funcao chama Cadastrar Venda*/
	     break;

			 case 5 :
			 	/*Funcao chama ...*/
			 		printf("\n-------	Selecionou o menu para mostrar qual vendedor vendeu mais em um determinado mes	---------\n");
			 break;		 

			 case 6 : 
			 	/* Funcao chama ...*/
					printf("\n-------	Selecionou o menu que mostra o mes com mais vendas	---------\n");
			 break;


	     default :
	       printf ("\nEsse numero nao faz parte das opcoes do menu, tente novamente!\n");
	  }
}

cadastrarVendedor(){
	/*Struct Vendedor*/
	struct CadastroVendedor {
		int codigo;
		char nomeVendedor[50];
	};

	/*Variavel*/
	struct CadastroVendedor vendedor;
	printf("\n");
	printf("\n---------- Cadastro de Vendedor -----------\n\n\n");

	printf("Nome do Vendedor: ");
  fflush(stdin); 
  fgets(vendedor.nomeVendedor, 50, stdin);
   
  printf("\n\n --------- Dados do vendedor ja cadastrado ---------\n\n");
  printf("Nome do Vendedor: %s", vendedor.nomeVendedor);
	
}



int main ()
{
	/*setlocale*/
	setlocale(LC_ALL, "Portuguese");
	
	/*Variaveis*/
	int menu;
	
	/*Menu*/
	printf("-------------	Sistema de Vendas	-------------");
	printf("\n");
 	printf("\n-------------		Menu		-------------");
	printf("\n");
	printf("\nDigite a opcao voce deseja: ");
	printf("\n[1] = Cadastrar Vendedor.");
	printf("\n[2] = Registrar Venda.");
	printf("\n[3] = Consultar as vendas de um vendedor em determinado mes.");
	printf("\n[4] = Consultar total de vendas de um vendedor.");
	printf("\n[5] = Mostrar o vendedor que mais vendeu em determinado mes.");
	printf("\n[6] = Mostrar o mes com mais vendas.");
  printf("\n");
	scanf("%d", &menu);
	
	/*Funcao para chamar menu*/
 	chamarMenu( menu );
 	
  
  system ("pause");
  return 0;
}
