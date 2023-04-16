#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota1, nota2, nota3, peso1, peso2, peso3, m;
	
	printf("Informe a primeria nota:\n");
	scanf("%f", &nota1);
	printf("Informe o peso da primeria nota:\n");
	scanf("%f", &peso1);
	
	printf("Informe a segunda nota:\n");
	scanf("%f", &nota2);
	printf("Informe o peso da segunda nota:\n");
	scanf("%f", &peso2);
	
	printf("Informe a terceira nota:\n");
	scanf("%f", &nota3);
	printf("Informe o peso da terceira nota:\n");
	scanf("%f", &peso3);
	
	m = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3)) / (peso1+peso2+peso3);
	
	printf("\nMedia aritmetica das notas: %.2f.\n", m);
	
	system("pause");
	return 0;
}
