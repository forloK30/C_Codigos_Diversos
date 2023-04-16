#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 6

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int v[TAM];
	int i, anter, atual;
	anter = 0;
	atual = 1;
	
	printf("Série de Fibonacci (8 primeiros termos):\n");
	printf("%d %d ", anter, atual);
	
	for(i=0; i<TAM; i++){
		v[i] = anter+atual;
		printf("%d ", v[i]);
		anter = atual;
		atual = v[i];
	}
	
	printf("\n");
	system("pause");
	return 0;
}
