#include<windows.h>
#include <stdio.h>
#include <conio2.h>

int main() {
    int CI, LI, CF, LF; // Coordenadas do retângulo
    int x, y;           // Coordenadas do objeto
    int tecla;
    int centroX,centroY;

    printf("Coluna Inicial [1-80]: ");
    scanf("%d", &CI);
    printf("Linha Inicial [1-25]: ");
    scanf("%d", &LI);
    printf("Coluna Final [1-80]: ");
    scanf("%d", &CF);
    printf("Linha Final [1-25]: ");
    scanf("%d", &LF);

    // Calcular o centro do retângulo
    centroX= (CI + CF) / 2;
    centroY = (LI + LF) / 2;

    clrscr();

    // Desenhar o retângulo
    gotoxy(CI, LI);
    printf("%c", 201);
    gotoxy(CF, LI);
    printf("%c", 187);
    gotoxy(CI, LF);
    printf("%c", 200);
    gotoxy(CF, LF);
    printf("%c", 188);

    for (int i = CI + 1; i < CF; i++)//vertical
	{
        gotoxy(i, LI);
        printf("%c", 205);
        gotoxy(i, LF);
        printf("%c", 205);
    }

    for (int i = LI + 1; i < LF; i++)//horizontal
    {
        gotoxy(CI, i);
        printf("%c", 186);
        gotoxy(CF, i);
        printf("%c", 186);
    }

    // objeto no centro do retângulo
    x = centroX;
    y = centroY;

    // Desenhar o objeto
    gotoxy(x, y);
    printf("%c", 1);

    do {
        tecla = getch();
        
        
        if(tecla==0 || tecla==224)
        {
        	tecla = getch();
		

        //  posição do objeto 
        if (tecla == 72 && y > LI + 2) {
            gotoxy(x, y);
            printf(" ");
            y--;
        } else if (tecla == 80 && y < LF - 2) {
            gotoxy(x, y);
            printf(" ");
            y++;
        
        } else if (tecla == 77 && x < CF - 2) {
            gotoxy(x, y);
            printf(" ");
            x++;
        }  else if (tecla == 75 && x > CI + 2) {
            gotoxy(x, y);
            printf(" ");
            x--;
        }

        // Redesenhar o objeto
        gotoxy(x, y);
        printf("%c", 1);
  }
    } while (tecla != 27);

    return 0;
}

