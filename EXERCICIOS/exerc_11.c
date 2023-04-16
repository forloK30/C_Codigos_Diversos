#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int seg, min, hr;
	
	printf("Informe o tempo em segundos:\n");
	scanf("%d", &seg);
	
	hr = seg / 3600;
	seg = seg - (3600*hr);
	
	min = seg / 60;
	seg = seg - (60*min);
	
	printf("Horas: %d.\n", hr);
	printf("Minuto: %d.\n", min);
	printf("Segundo: %d.\n", seg);
		
	system("pause");
	return 0;
}
