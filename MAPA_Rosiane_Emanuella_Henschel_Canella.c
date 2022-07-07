# include <stdio.h>
# include <stdlib.h>


struct noArv{
	int valor;
	struct noArv* esq;
	struct noArv* dir;
};
typedef struct noArv Arv;



void imprimePreOrdem (Arv* a);
Arv* insere (Arv* a, int valor);
Arv* insere (Arv* r, int valor);




void main(){
	
	Arv* a = NULL;
	
	a= insere (a,2);
	a= insere (a,0);
	a= insere (a,1);
	a= insere (a,6);
	a= insere (a,8);
	a= insere (a,9);
	a= insere (a,7);
	a= insere (a,4);
	a= insere (a,5);
	
	printf("\nBusca pre ordem: \n");
	imprimePreOrdem(a);
	}
	
	void imprimePreOrdem (Arv* a)
	{
		if (a != NULL) {
			printf("%d ",a->valor);
			imprimePreOrdem(a->esq);
			imprimePreOrdem(a->dir);
		}
	}
	
	Arv* insere (Arv* a, int valor)
	{
		if (a==NULL) {
			a = (Arv*)malloc(sizeof(Arv));
			a->valor = valor;
			a->esq = NULL;
			a->dir = NULL;
		}else if (valor < a->valor){
			a->esq = insere (a->esq, valor);
		}else if (valor > a->valor){
			a->dir = insere(a->dir, valor);
		}
		return a;
		}
