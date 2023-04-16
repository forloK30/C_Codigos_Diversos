#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float CalcLucro(float vlr_i, float perc){
	return vlr_i*perc/100;
}
float CalImposto(float vlr_i, float perc){
	return vlr_i*perc/100;
}
float CalVlrF(float vlr_i, float v_lucro, float v_imposto){
	return vlr_i + v_lucro + v_imposto;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float vlr_i, vlr_f, perc_dist, v_dist, perc_impo, v_impo;
	
	printf("Informe o preço de fabrica:\n");
	scanf("%f", &vlr_i);
	printf("Informe o percentual de lucro do distribuidor:\n");
	scanf("%f", &perc_dist);
	printf("Informe o percentual de imposto:\n");
	scanf("%f", &perc_impo);
	
	v_dist = CalcLucro(vlr_i, perc_dist);
	v_impo = CalImposto(vlr_i, perc_impo);
	vlr_f = CalVlrF(vlr_i, v_dist, v_impo);
	
	printf("\nPreço de Fábrica: %.2f.\n", vlr_i);
	printf("Valor de Lucro: %.2f.\n", v_dist);	
	printf("Valor de Imposto: %.2f.\n", v_impo);	
	printf("Preço Final: %.2f.\n", vlr_f);
	
	system("pause");
	return 0;
}
