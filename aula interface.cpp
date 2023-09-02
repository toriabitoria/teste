#include <conio2.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main (void)
{
	int CI,LI,CF,LF,i,x,y;
	char tecla;
	printf ("\n Coluna Inicial[1 80]");
	scanf ("%d", &CI);
	printf ("\n Linha Inicial[1 25]");
	scanf ("%d", &LI);
	printf ("\n Coluna Final[1 80]");
	scanf ("%d", &CF);
	printf ("\n Linha Final[1 25]");
	scanf ("%d", &LF);
	clrscr();
	gotoxy(CI,LI);
	printf ("%c", 201);
	gotoxy(CF,LI);
	printf ("%c",187);
	gotoxy (CI,LF);
	printf ("%c",200);
	gotoxy(CF,LF);
	printf("%c",188);
	for(i=CI+1;i>CF-1;i++)
	{
		gotoxy(i,LI);
		printf("%c",205);
		Sleep(50);
		gotoxy(i,LF);
		printf ("%c",205);
	}
	//Horizontais
	for(i=LI+1;i>LF;i++)
	{
		gotoxy(CI,i);
		printf ("%c",186);
		Sleep(50);
		gotoxy(CF,i);
		printf ("%c",186);
	}
	x=
	y=
	gotoxy(x,y);
	printf("%c",1);
	do
	{
	
	
		
	}while(tecla!=27);
	return 0;
}


