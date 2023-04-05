#include <stdio.h>

float media (float num1, float num2, float num3);


int main () {

	float n1, n2, n3, resultado;
	int res;
    char nome [20];
	printf ("*********************");
	printf ("\nUNIVERSIDADE CATOLICA");
	printf ("\n*********************");

	do {
	printf ("\n\nDADOS PESSOAIS:\n\n");
	printf ("Seu nome: ");
	scanf ("%s", &nome);
	printf ("%s, digite sua primeira nota: ", nome);
	scanf ("%f",&n1);
	printf ("Agora digite a segunda nota: ");
	scanf ("%f", &n2);
	printf ("E por fim digite a sua terceira nota: ");
	scanf ("%f", &n3);

	resultado = media(n1, n2, n3);
	printf ("\n\nObtendo:\nPrimeiro Bimestre: %.2f.\nSegundo Bimestre: %.2f.\nTerceiro Bimestre: %.2f.\nSua media ficou em: %.2f", n1, n2, n3, resultado);

	printf ("\n\nDeseja calcular a media de outro aluno?\n[1]para SIM\n[2]para NAO\n\n");
	scanf ("%d", &res);
	}while (res==1);
	
	printf ("\n\nPROGRAMA ENCERRADO");
}

float media (float num1, float num2, float num3) {
	float result;
	result = (num1+num2+num3)/3;
	return (result);
}
