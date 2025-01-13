#include <stdio.h> //biblioteca de comunicação com usuário
#include  <stdlib.h> //biblioteca de espaço e alocação em memória
#include  <locale.h> //biblioteca de alocação de texto por região
#include  <string.h> //biblioteca rfesponsável por cuidar das string
int registro() // função responsável por cadastrar os usuários no sistema
{
    printf("voce escolheu o resgistro de nomes!\n");
    system("pause");
    // inicio da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome [40];
	char cargo[40];
	//final da criação de variáveis/string
	printf("digite o cpf a ser cadastrado!\n"); //coletando informações do usuário
	scanf("%s" , cpf); // % refere-se a string
	
	strcpy(arquivo , cpf); // responsável por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); // salvo o valor da variável
	fclose(file); //fecho o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado:\n ");
	scanf("%s", nome);
	
	file= fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado:\n ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
    printf ("Digite o cargo a ser cadastrado:\n ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");	
		
}

int consultar()
{
	setlocale(LC_ALL, "PORTUGUESE"); // definindo linguagem
    char cpf [40];
    char conteudo [200];
    
    printf("Digite o CPF a ser cosultado: ");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen (cpf, "r");
    
    if(file == NULL)
    {
    	printf("Não foi possível abrir o arquivo, não localizado!. \n");
	}
    while(fgets (conteudo, 200, file) != NULL)
    {
    	printf("\nEssas são as informações do usuário: ");
    	printf("%s", conteudo);
    	printf("\n\n");
    	
    	system ("pause");
	}
    
    
}

int deletar()
{
   char CPF[40];
   
   printf ("Digite o CPF do usuário a ser deletado: ");
   scanf("%s", CPF);
   
   remove(CPF);
   
   FILE * file;
   file = fopen(CPF, "r");
   
   if(file = NULL);
   {
   	   printf( " o usuário não se encontra no sistema!. \n");
   	   system("pause");
   }
}



int main()
    {      
    int opcao=0; // definindo variáveis	
	int laco=1;

	for(laco=1;laco=1;)
	{
	
	
	system("cls");
	
 	setlocale(LC_ALL, "PORTUGUESE"); // definindo linguagem
	
	printf("### CARTÓRIO DA EBAC ###\n\n"); // inicio do Menu
	printf("Escolha a opçao desejada no menu:\n\n");
	printf("\t1 - Registrar nomes!\n");
	printf("\t2 - Consultar nomes!\n");
	printf("\t3 - Deletar nomes!\n");
	printf("\t4 - Sair do sistema \n\n");
	
	printf("opcao: "); //fim do menu
	
    scanf("%d", &opcao); //armazenando a escolha do usuário
	
	system("cls"); 
	
	switch(opcao) //inicio da seleção
	{
		case 1:
	    registro();
		break;
		
		case 2:
	    consultar();
		break;
		
		case 3:
	    deletar();
	    break;
	    
	    case 4:
	    printf ("Obrigado por utilizar o sistema!\n");
	    return 0;
	    break;
	    
	    default:
		printf("essa opcao não está disponível!\n");
		system("pause");
		break;
    } //fim da seleção
   }
}
        
    
	
	
		


