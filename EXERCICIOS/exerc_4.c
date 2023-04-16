#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 9

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[TAM], j, cont;
	
	for(i=0; i<TAM; i++){
		printf("Informe um número inteiro:\n");
		scanf("%d", &vet[i]);
	}
	
	printf("\n");
	for(i=0; i<TAM; i++){
		cont = 0;
		for(j=1; j<=vet[i]; j++){
			if(vet[i] % j == 0){
				cont++;
			}
		}
		if(cont == 2){
			printf("%d é primo, posição: %d.\n", vet[i], i+1);
		}
	}
	
	system("pause");
	return 0;
}
