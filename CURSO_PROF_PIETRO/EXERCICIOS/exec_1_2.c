#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop *//* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int soma, i;
	soma = 0;
	
	for(i=1; i<=10; i++){
		soma+= i;
	}
	
	printf("Soma: %d", soma);
	
	printf("\n");
	system("pause");
	return 0;
}
