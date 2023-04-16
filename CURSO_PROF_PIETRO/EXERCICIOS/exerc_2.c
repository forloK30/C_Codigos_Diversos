#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota1, nota2, nota3, m;
	
	printf("Informe a primeria nota:\n");
	scanf("%f", &nota1);
	printf("Informe a segunda nota:\n");
	scanf("%f", &nota2);
	printf("Informe a terceira nota:\n");
	scanf("%f", &nota3);
	
	m = (nota1 + nota2 + nota3)/3;
	
	printf("\nMedia aritmetica das notas: %.2f.\n", m);
	
	system("pause");
	return 0;
}
