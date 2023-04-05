#include <stdio.h>


//protótipos

float C_P_F (float c); //Celsius Para Fahrenheit
float F_P_C (float f); //Fahrenheit Para Celsius
float C_P_K (float c); //Celsius Para Kelvin
float K_P_C (float k); //Kelvin Para Celsius
float C_P_R (float c); //Celsius Para Réaumur
float R_P_C (float Re);//Réaumur Para Celsius
float K_P_R (float k); //Kelvin para Rankine
float R_P_K (float r); //Rankine para Kelvin 

int main () {
	int conv;
	float grauC, grauF, grauK, grauRe, grauR, resultado;

	printf ("*************************");
	printf ("\nCONVERSOES DE TEMPERATURA");
	printf ("\n************************\n\n");
	printf ("SELECIONE UM TIPO DE CONVERSAO:\n\n\n");
	printf ("[1] Celsius (C)   ---> Fahrenheit (F)\n");
	printf ("[2] Fahrenheit(F) ---> Celsius (C)\n");
	printf ("[3] Celsius (C)   ---> Kelvin (K)\n");
	printf ("[4] Kelvin (K)    ---> Celsius (C)\n");
	printf ("[5] Celsius (C)   ---> Reaumur (Re)\n");
	printf ("[6] Reaumur (Re)  ---> Celsius (C)\n");
	printf ("[7] Kelvin (K)    ---> Rankine (R)\n");
	printf ("[8] Rankine (R)   ---> Kelvin (K)\n");	

	printf ("\n\nConversao: ");
	scanf ("%d", &conv);

	switch (conv) {
		case 1:
		printf ("Digite o valor dos graus Celsius: ");
		scanf ("%f", &grauC);
		resultado = C_P_F (grauC);
		printf ("Conversao de Celsius para Fahrenheit:%.2f", resultado);
		break;

		case 2:
		printf ("Digite o valor dos graus Fahrenheit: ");
		scanf ("%f", &grauF);
		resultado = F_P_C (grauF);
		printf ("Conversao de Fahrenheit para Celsius:%.2f", resultado);
		break;

		case 3:
		printf ("Digite o valor dos graus Celsius: ");
		scanf ("%f", &grauC);
		resultado = C_P_K (grauC);
		printf ("Conversao de Celsius para Kelvin:%.2f", resultado);
		break;

		case 4:
		printf ("Digite o valor dos graus Kelvin: ");
		scanf ("%f", &grauK);
		resultado = K_P_C (grauK);
		printf ("Conversao de Kelvin para Celsius:%.2f", resultado);
		break;

		case 5:
		printf ("Digite o valor dos graus Celsius: ");
		scanf ("%f", &grauC);
		resultado = C_P_R (grauC);
		printf ("Conversao de Celsius para Reaumur:%.2f", resultado);
		break;

		case 6:
		printf ("Digite o valor dos graus Reaumur: ");
		scanf ("%f", &grauRe);
		resultado = R_P_C (grauRe);
		printf ("Conversao de Reaumur para Celsius:%.2f", resultado);
		break;

		case 7:
		printf ("Digite o valor dos graus Kelvin: ");
		scanf ("%f", &grauK);
		resultado = K_P_R (grauK);
		printf ("Conversao de Kelvin para Rankine:%.2f", resultado);
		break;

		case 8:
		printf ("Digite o valor dos graus Rankine: ");
		scanf ("%f", &grauR);
		resultado = R_P_K (grauR);
		printf ("Conversao de Rankine para Kelvin:%.2f", resultado);
		break;

		default:
		printf ("\n\nPor favor, digite um numero compativel com o da tabela.");
}
}
 
float C_P_F (float c){
	float F;
	F = (9 * c/5) + 32;
	return (F);	
}

float F_P_C (float f){
	float C;
	C = (f - 32) * 5/9;
	return (C);
}

float C_P_K (float c){
	float K;
	K = c + 273.15;
	return (K);
}

float K_P_C (float k){
	float C;
	C = k - 273.15;
	return (C);
}

float C_P_R (float c){
	float Re;
	Re = c * 4/5;
	return (Re);
}

float R_P_C (float Re){
	float C;
	C = Re * 5/4;
	return (C);
}

float K_P_R (float k){
	float R;
	R = k * 1.8;
	return (R);
}
 
float R_P_K (float r){
	float K;
	K = r/1.8;
    return (K);
}
