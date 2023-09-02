#include <stdio.h>
#include <conio2.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <math.h>

#define TF 5
#define TF 100

char Menu(void)
{
	clrscr();
	printf("\n[A] Decimal p/ Binario");
	printf("\n[B] Binario p/ Decimal");
	printf("\n[C] Perfeito");
	printf("\n[D] Inserir Numero em um vetor");
	printf("\n[E] Exibir conteudo do vetor");
	printf("\n[F] Frequencia - Exerc 1 - Lista 2");
	printf("\n[ESC] Sair\n");
	
	return toupper(getche());
}

int LeNum(void)
{
	
	int valor;
	printf("\nDigite um valor: ");
	scanf("%d", &valor);
	
	return valor;
	
}

int DecToBin(int Decimal)
{
	int binario=0, mult=1;
	
	while(Decimal>=2)
	{
		binario += mult*(Decimal%2);
		Decimal = Decimal/2;
		mult = mult*10;
	}
	binario += Decimal*mult;
	Decimal = binario;
	return Decimal;
}

int BinToDec(int Binario)
{
	int mult = 0, decimal = 0;
	
	while(Binario>0)
	{
		decimal += pow(2,mult)*(Binario%10);
		Binario = Binario/10;
		mult+=1;
	}
	Binario=decimal;
	return Binario;
}

int Perfeito(int num)
{
	int i, cont = 0;
	for(i = 1; i<=num/2; i++)
	{
		if(num%i == 0)
		{
			cont+=i;
			printf("\nDivisor: %d", i);
			getch();
		}
	}
	if(cont == num)
		return 1;
	else 
		return 0;
}

void Exibe(int N)
{
	printf("\nResultado: %d\n",N);
	getch();
}

void InserirVetor(int Vetor[TF], int &TL)
{
	int auxNum;
	printf("\nVetor[%d]: ", TL);
	scanf("%d", &auxNum);
	while(TL < TF && auxNum > 0)
	{
		Vetor[TL] = auxNum;
		TL++;
		if (TL<TF)
		{
			printf("\nVetor[%d]: ", TL);
			scanf("%d", &auxNum);
		}
		else
			{
				printf("\nVetor Cheio!");
				getch();
			}
	}
}

void ExibeVetor(int Vetor[TF], int TL)
{
	int i;
	for(i = 0; i < TL; i++)
		printf("[%d] - %d\n", i, Vetor[i]);
	getch();
}

void Frequencia (int Vetor[TF], int TL, int &NrMaiorFr, int &QtdeVezes)
{
	QtdeVezes=0;
	int a, b;
	for(a = 0; a < TL-1; a++)
		cont=0;
		for(b = 1; b < TL; b++)
		{
		if()
		}

	getch();
}


void Executar(void)
{
	char op;
	int num, x, TL = 0, VetorA[TF], VetorB[TF];
	do{
		op = Menu();
		switch(op)
		{
			case 'A':
				printf("\nCONVERTE DECIMAL PARA BINARIO\n");
				Exibe(DecToBin(LeNum()));
				break;
			case 'B':
				printf("\nCONVERTE BINARIO PARA DECIMAL\n");
				Exibe(BinToDec(LeNum()));
				break;
			case 'C':
				num = LeNum();
				x = Perfeito(num);
				if(x == 1)
					printf("\nNumero Perfeito!");
				else
					printf("\nNumero Nao Perfeito!");
				getch();
				break;
			case 'D':
				printf("\nINSERIR VETOR\n");
				InserirVetor(VetorA, TL);
				break;
			case 'E':
				printf("\nEXIBE VETOR\n");
				ExibeVetor(VetorA, TL);
				break;
			case 'F':
				printf("\nFREQUENCIA\n");
				
				break;	
					
		}
	}while(op != 27);
}

int main(void)
{
	Executar();
	return 0;
}

