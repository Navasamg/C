#include<stdio.h>
#include<stdlib.h>

void push(int item);
void pop();
void imprimir();
int entrada_dados();

typedef struct apelido_no{
	int dado;
	struct apelido_no *proximo;
}no;

no *top=NULL;

int main(){
	int n, opcao;
	do{
		system("cls");
		printf("1. empilhar \n2. Desempilhar\n3. imprimir \n4. Sair");
		printf("escolha uma opcao: ");
		scanf("%d, &opcao");
		switch(opcao){
			case 1:
				n=entrada_dados();
				push(n);
				break;
			case 2:
				pop();
				break;
			case3:
				imprimir();
				break;
		}
		}
		while(opcao!=4);
		system("pause");
		return 0;
	
	void push(int item){
		printf("\nEMPILHANDO...");
		no *novo=malloc(sizeof(no));
		novo->dado=item;
		novo->proximo=top;
		top=novo;
		printf("\nnValor %d empilhando\n",novo->dado);
		system("pause");
	}
	void pop(){
		printf("\nDESEMPILHANDO...\n");
		if(top==NULL)
		printf("a pilha esta vazia\n");
		else{
			no *temp;
			temp=top;
			top=top->proximo;
			printf("\n%d DESEMPILHADO \n", temp->dado);
			free(temp);
			
		}
		system("pause");
	}
	void imprimir(){
		no *temp;
		temp=top;
		printf("\nIMPRIMINDO PILHA...\n");
		while (temp!=NULL){
			printf("%d\n, temp->dado;");
			temp=temp->proximo;
		}
		system("pause");
		int entrada_dados(){
			int valor;
			printf("\nentre com valor a empilhar");
			scanf("%d", &valor);
			return valor;
		}
	}
}
