#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float x, y;
	
	printf("Informe um valor:\n");
	scanf("%f", &x);
	printf("Informe outro valor:\n");
	scanf("%f", &y);
	
	if(x>y){
		printf("Maior valor: %f.\n", x);
		
	}else{
		if(y>x){
			printf("Maior valor: %.2f.\n", y);
			
		}else{
			printf("Os valores sao iguais!\n");
		}
	}
	
	system("pause");
	return 0;
}
