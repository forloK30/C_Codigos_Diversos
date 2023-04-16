#include <stdio.h>
#include <stdlib.h>

float som(float x, float y);
float sub(float x, float y);
float mul(float x, float y);
float divi(float x, float y);

int main(){
	
	int oper;
	float x, y;
	
	printf("Veja a tabela a seguir:\n 1 - Soma \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n\n");
	printf("Informe a numero da operacao escolhida:\n");
	scanf("%d", &oper);
	
	printf("Informe o primeiro valor:\n");
	scanf("%f", &x);
	printf("Informe o segundo valor:\n");
	scanf("%f", &y);
	
	printf("\nResposta:\n");
	switch(oper){
		case 1:
			som(x,y);
			break;
		case 2:
			sub(x,y);
			break;
		case 3:
			mul(x,y);
			break;
		case 4:
			divi(x,y);
			break;
	}
	
	printf("\n");
	system("pause");
	return 0;
}

	float som(float x, float y){
		printf("%.2f.\n", x+y);
	}
	
	float sub(float x, float y){
		printf("%.2f.\n", x-y);
	}
	
	float mul(float x, float y){
		printf("%.2f.\n", x*y);
	}
	
	float divi(float x, float y){
		printf("%.2f.\n", x/y);
	}
