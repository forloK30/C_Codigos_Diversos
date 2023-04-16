#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, mult;
	
	for(x=1; x<11; x++){
		printf("TABUADA DO %d\n", x);
		
		for(y=1; y<11; y++){
			mult = x*y;
			printf("%d X %d = %d\n", x, y, mult);
		}
		printf("\n");
	}
	
	
	system("pause");
	return 0;
}
