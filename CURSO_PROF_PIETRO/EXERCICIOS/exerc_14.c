#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa{
	int idade;
	float peso;
	float altura;
	char nome[50]; //definicao do struct
};

typedef struct tipo_pessoa tipo_pessoa; //renomeacao

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa lista[TAM];
	int i;
	
	for(i=0; i<TAM; i++){
		printf("Insira os dados (%d):\n", i+1);
		puts("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("Peso (em kg): ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
		
		puts("Altura (em cm): ");
		scanf("%f", &lista[i].altura);
		fflush(stdin);
	}
	system("cls"); //limpar tela preta
		
	puts("Dados selecionados:\n");
	printf("------------ Pessoa %d ------------\n", 1);
	printf("\tNome: %s\n", lista[0].nome);
	printf("\tIdade: %d\n", lista[0].idade);
			
	printf("\n------------ Pessoa %d ------------\n", 3);
	printf("\tPeso: %.2f Kg\n", lista[2].peso);
	printf("\tAltura: %.2f cm\n", lista[2].altura);
	printf("----------------------------------\n");
	
	system("pause");
	return 0;	
}
