#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x,y,z,w,soma;
	
	printf("Informe o primeiro valor inteiro: \n");
	scanf("%d", &x);
	printf("Informe o segundo valor inteiro: \n");
	scanf("%d", &y);
	printf("Informe o terceiro valor inteiro: \n");
	scanf("%d", &z);
	printf("Informe o quarto valor inteiro: \n");
	scanf("%d", &w);
		
	soma = (x+y+z+w);
	printf("\nSoma dos valores: %d.\n", soma);
	
	system("pause");
	return 0;
}
