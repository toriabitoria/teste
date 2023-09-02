#include <conio2.h>
#include <stdio.h>
#include <stdlib.h>

int DecToBin(int Decimal)
{
	int Binario=0;
	
	return Binario;
}
int LeValor(void)
{
	int Valor;
	printf("Digite um valor em Decimal: ");
	scanf("%d",&Valor);
	return Valor;
}
void ExibeResultado(int N)
{
	printf("\n Resultado: %d\n",N);
	getch();
	
}
int main(void)
{
	
	ExibeResultado(DecToBin(LeValor()));
	return 0;
}
