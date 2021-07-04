#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float soma(float valorA, float valorB)
{
	float resultado;
	resultado= valorA+valorB;
	return resultado;
}

void exibeFloat(float valor)
{
	printf("Valor:%.2f\n", valor);
}


int main(int argc, char *argv[]) {
	float a;
	float b;
	float r;
	
	
	printf("Digite o primeiro valor:");
	scanf("%f", &a);
	printf("Digite o segundo valor:");
	scanf("%f", &b);
	
	r=soma(a,b);
	
	exibeFloat(r);
	
	system("pause");
	
	return 0;
}
