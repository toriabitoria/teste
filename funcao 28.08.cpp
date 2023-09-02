#include <conio2.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int DecToBin(int Decimal)
{
	int Binario, mult =1;
	
	while (Decimal>=2)
	{
		Binario=Binario+Decimal%2*mult;
		mult=mult*10;
		Decimal=Decimal/2;
	}
	
	Binario=Binario+Decimal*mult;
	
	return Binario;
}

int BinToDec(int Binario)
{
	int Decimal=0, mult=1;
	while ()
	{
		
		
		
	}
		
	return Decimal;
}

int LeValor(void)
{
	int Valor;
	printf("Digite um valor: ");
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
