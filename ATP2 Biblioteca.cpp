#include <stdio.h>
#include <conio2.h>
#include <stdlib.h>
#include <windows.h>

struct Livros{
    int id_livro, ano, status;

    char titulo[50];
};

struct Autores{
    int id_autor, status;

    char nome[50], nacionalidade[50];
};

struct Emprestimos{
    int id_emprestimo, id_livro, id_pessoa, diaemp, diadev, mesemp, mesdev, anoemp, anodev, status;
};

struct Pessoas{
    int id_pessoa, status;

    char nome[50], telefone[15], endereco[100];
};

struct LivroAutor{
    int id_livro, id_autor, status;
};

void CadastrarLivro()
{
	
}


void MenuCRUD(char Menu,Livros AuxLivros, Autores AuxAutores, Emprestimos AuxEmprestimos, Pessoas AuxPessoas, LivroAutor AuxLivroAutor,int TLL,int TLA,int TLE,int TLP, int TLLA)
{
	system("cls");
	
    switch(Menu)
    {
        case 'A':
        	do
        	{
	            printf("*** Menu Cadastrar ***\n");
	            printf("[A] Livro\n");
	            printf("[B] Autor\n");
	            printf("[C] Emprestimo\n");
	            printf("[D] Pessoa\n");
	            printf("[E] LivroAutor\n");
	            printf("[ESC] Sair\n");
	            printf("\nOpcao Desejada: ");
	
	        	Menu = toupper(getch());
	        	
	        	switch(Menu)
	        	{
	        		case 'A':
	        			
	        		break;
	        		
	        		case 'B':
	        			
	        		break;
	        		
	        		case 'C':
	        			
	        		break;
	        		
	        		case 'D':
	        			
	        		break;
	        	}
	    	}while(Menu != 27);
        break;

        case 'B':
            do
        	{
	            printf("*** Menu Atualizacao ***\n");
	            printf("[A] Livro\n");
	            printf("[B] Autor\n");
	            printf("[C] Emprestimo\n");
	            printf("[D] Pessoa\n");
	            printf("[E] LivroAutor\n");
	            printf("[ESC] Sair\n");
	            printf("\nOpcao Desejada: ");
	
	        	Menu = toupper(getch());
	        	
	        	switch(Menu)
	        	{
	        		case 'A':
	        			
	        		break;
	        		
	        		case 'B':
	        			
	        		break;
	        		
	        		case 'C':
	        			
	        		break;
	        		
	        		case 'D':
	        			
	        		break;
	        	}
	    	}while(Menu != 27);
        break;

        case 'C':
            do
        	{
	            printf("*** Menu Excluir ***\n");
	            printf("[A] Livro\n");
	            printf("[B] Autor\n");
	            printf("[C] Emprestimo\n");
	            printf("[D] Pessoa\n");
	            printf("[E] LivroAutor\n");
	            printf("[ESC] Sair\n");
	            printf("\nOpcao Desejada: ");
	
	        	Menu = toupper(getch());
	        	
	        	switch(Menu)
	        	{
	        		case 'A':
	        			
	        		break;
	        		
	        		case 'B':
	        			
	        		break;
	        		
	        		case 'C':
	        			
	        		break;
	        		
	        		case 'D':
	        			
	        		break;
	        	}
	    	}while(Menu != 27);
        break;

        case 'D':
            do
        	{
	            printf("*** Menu Visualizar ***\n");
	            printf("[A] Livro\n");
	            printf("[B] Autor\n");
	            printf("[C] Emprestimo\n");
	            printf("[D] Pessoa\n");
	            printf("[E] LivroAutor\n");
	            printf("[ESC] Sair\n");
	            printf("\nOpcao Desejada: ");
	
	        	Menu = toupper(getch());
	        	
	        	switch(Menu)
	        	{
	        		case 'A':
	        			
	        		break;
	        		
	        		case 'B':
	        			
	        		break;
	        		
	        		case 'C':
	        			
	        		break;
	        		
	        		case 'D':
	        			
	        		break;
	        	}
	    	}while(Menu != 27);
        break;
    }
}

void Menu(Livros AuxLivros, Autores AuxAutores, Emprestimos AuxEmprestimos, Pessoas AuxPessoas, LivroAutor AuxLivroAutor,int TLL,int TLA,int TLE,int TLP, int TLLA)
{
	char Menu;
	
    do
    {
        printf("*** Menu ***\n");
        printf("[A] Cadastrar\n");
        printf("[B] Atualizar\n");
        printf("[C] Excluir\n");
        printf("[D] Visualizar\n");
        printf("[E] Buscar Autor por Letra\n");
        printf("[F] Buscar Livro por Palavra\n");
        printf("[G] Emprestimo por Pessoa\n");
        printf("[H] Buscar Livros por Autor\n");
        printf("[I] Relatorio Geral Emprestimos\n");
        printf("[J] Incluir Dados\n");
        printf("[ESC] Sair\n");
        printf("\nOpcao Desejada: ");

        Menu = toupper(getch());

        switch(Menu)
        {
            case 'A':
				MenuCRUD(Menu,AuxLivros,AuxAutores,AuxEmprestimos,AuxPessoas,AuxLivroAutor,TLL,TLA,TLE,TLP,TLLA);
            break;

            case 'B':
                MenuCRUD(Menu,AuxLivros,AuxAutores,AuxEmprestimos,AuxPessoas,AuxLivroAutor,TLL,TLA,TLE,TLP,TLLA);
            break;

            case 'C':
                MenuCRUD(Menu,AuxLivros,AuxAutores,AuxEmprestimos,AuxPessoas,AuxLivroAutor,TLL,TLA,TLE,TLP,TLLA);
            break;

            case 'D':
                MenuCRUD(Menu,AuxLivros,AuxAutores,AuxEmprestimos,AuxPessoas,AuxLivroAutor,TLL,TLA,TLE,TLP,TLLA);
            break;

            case 'E':
                
            break;

            case 'F':
                
            break;
            
            case 'G':
                
            break;
            
            case 'H':
                
            break;
            
            case 'I':
                
            break;
            
            case 'J':
                
            break;
        }
    }while(Menu =! 27);
}

void CalculaTLs(int TLL, int TLA, int TLE, int TLP, int TLLA)
{
}
void CriarArquivos(void)
{
	FILE *Ptr;
	
	Ptr = fopen("Livros.dat","ab");
	fclose(Ptr);
	Ptr = fopen("Autor.dat","ab");
	fclose(Ptr);
	Ptr = fopen("Emprestimos.dat","ab");
	fclose(Ptr);
	Ptr = fopen("AutorLivro.dat","ab");
	fclose(Ptr);
	Ptr = fopen("Pessoas.dat","ab");
	fclose(Ptr);
}
int main()
{
	CriarArquivos();

	int TLL=0, TLA=0, TLE=0, TLP=0, TLLA=0;
	
	Livros AuxLivros[200]; Autores AuxAutores[200]; Emprestimos AuxEmprestimos[500]; Pessoas AuxPessoas[100]; LivroAutor AuxLivroAutor[500];
	
	CalculaTLs(TLL,TLA,TLE,TLP,TLLA);
	
	Menu(AuxLivros,AuxAutores,AuxEmprestimos,AuxPessoas,AuxLivroAutor,TLL,TLA,TLE,TLP,TLLA);
}
