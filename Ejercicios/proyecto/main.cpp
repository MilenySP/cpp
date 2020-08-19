#include <iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include <stdio.h>
#include "menu.h"
#include "snake.h"

using namespace std;
int main(int argc, char** argv) {
	
	int opcion = 0;
	system ("color 64");

	while (true){
		system ("cls");

		cout << endl;
		cout << "1 - SNAKE" << endl;
		cout << "2 - PACMAN" << endl;
		cout << "0 . Salir" << endl;
		
		cout << "Ingresa una opncion para disfrutar de nuestros juegos" << endl;
		cin >> opcion;
		system ("pause");

	char tecla;
	int puntos=0;
	int xPos=30, yPos=20;
	
	inicializarArreglo();
	dificultad();	
	gotoxy(50,2);
	cout << puntos;
	pintar();
	gotoxy(xPos, yPos);
        cout<<(char)4;	
	
	while(tecla != 27 && gameover() )
    {
	    proceso(tecla, puntos);
	}
	
	if (!gameover())
    {
        MessageBoxA(NULL, "haz perdido","perdedor",MB_OK);
        system("cls");
    }
	}
	
	system("pause>NULL");
	cout << "Saliste del sistema";
	
	
	return 0;

	
}

