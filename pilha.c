#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int TIPOCHAVE;

typedef struct
{
	TIPOCHAVE chave;
	char NOMEPROD[100+1];
	char DATAVENC[10+1];
}REGISTRO;

typedef struct aux
{
	REGISTRO reg;
	struct aux * PROX;
}ELEMENTO;

typedef ELEMENTO *PONT;

typedef struct
{
	PONT topo;
}PILHA;


void inicializarPilha(PILHA * p)
{
	p->topo = NULL;
}

int tamanho (PILHA * p)
{
	PONT end = p->topo;
	int tam = 0;
	while (end != NULL)
	{
		tam++;
		end = end->PROX;
	}
	return tam;
}

void exibirPilha(PILHA * p)
{
	PONT end = p->topo;
	system("cls");
	printf("Pilha :  \" ");
	while(end != NULL)
	{
		printf("%i", end->reg.chave);
		end = end->PROX;
	}
	printf("\"\n");
}

bool estaVazia(PILHA* p) 
{
   if (p->topo == NULL) 
      return true;  
   return false;
}

bool inserirElemPilha(PILHA* p, REGISTRO reg)
{
   PONT novo  = (PONT) malloc(sizeof(ELEMENTO));
   if (novo==NULL)
   {
      printf ("\nErro ao alocar memória.");
      printf ("\nNão foi possível inserir na pilha!");
      getch();
      return false;
   }   
   novo->reg  = reg;
   novo->PROX = p->topo;  
   p->topo    = novo;  
   return true;
}

bool excluirElemPilha(PILHA* p, REGISTRO* reg) 
{  
   if ( p->topo == NULL) 
      return false;
   *reg        = p->topo->reg;  
   PONT apagar = p->topo;
   p->topo     = apagar->PROX; 
   free(apagar);
   return true;
}

void reinicializarPilha (PILHA* p) 
{  
   PONT apagar;
   PONT posicao = p->topo;  
   while (posicao != NULL) 
   {
      apagar  = posicao;  
      posicao = posicao->PROX;  
      free(apagar);
   }
   p->topo = NULL;
}

int main()
{
	
}
