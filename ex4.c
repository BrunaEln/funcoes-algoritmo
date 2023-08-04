#include <stdio.h>

int maior (int n1, int n2){

	int result;
	if (n1>n2) {
		result = n1;
		return (result);
	}else {
		result = n2;
		return (result);
	} 
}


int main () {
	int N1, N2, resultado;
	printf ("Digite um numero: ");
	scanf ("%d", &N1);
	printf ("Digite outro numero: ");
	scanf ("%d", &N2);

	resultado = maior(N1, N2);

	printf ("O maior numero digitado: %d", resultado);

}