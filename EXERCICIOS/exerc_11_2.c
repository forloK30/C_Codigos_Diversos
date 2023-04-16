#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, mat[TAM][TAM], num;

	printf("Elementos da Matriz (%dx%d)\n", TAM, TAM);
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf("Insira o elemento da posição (%d,%d):\n", i+1, j+1);
			scanf("%d", &num);
			
			mat[i][j] =num;
		}
	}
	
	printf("\nMatriz (%dx%d) completa:\n", TAM, TAM);
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
