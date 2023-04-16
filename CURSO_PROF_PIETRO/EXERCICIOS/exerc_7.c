#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float trab, ava, exam, m;
	
	printf("Informe sua nota no Trabalho de Laboratorio:\n");
	scanf("%f", &trab);
	printf("Informe sua nota na Avaliacao Semestral:\n");
	scanf("%f", &ava);
	printf("Informe sua nota no Exame Final:\n");
	scanf("%f", &exam);
	
	m = (trab*2 + ava*3 + exam*5)/10;
	printf("\nMedia: %.2f", m);
	
	if(m >= 0.0 && m <= 10.0){
		if(m >= 8.0){
			printf("\nConceito A\n");
		}else{
			if(m >= 7.0){
				printf("\nConceito B\n");
			}else{
				if(m >= 6.0){
					printf("\nConceito C\n");
				}else{
					if(m >= 5.0){
						printf("\nConceito D\n");
					}else{
						printf("\nConceito E\n");
					}
				}
			}
		}
	}
	
	system("pause");
	return 0;
}
