 #include <iostream>
 #include "snake.h"
 #include "pacman.h"
 #include "menu.h"
 #include "nave.h"
 
 using namespace std;

 void menu () {
     bool salir = false;
     while (salir == false){

    int opcion = 0;

  
		cout << "&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
		cout << "&& MENU DE JUEGOS SOLI &&" << endl;
		cout << "&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
		
		cout << endl;
		cout << "1 - SNAKE" << endl;
		cout << "2 - Pac-Man" << endl;
        cout << "3 - Nave" << endl;
		cout << "0 - Salir" << endl;

        cout << endl;
        cout << "ingreseun numero y precione enter:";
        cout << endl;
        cin >> opcion;

        if (opcion == 0){
			break;
		}


        switch (opcion)
        {
        case 1:
            snake();
            break;
        case 2:
            pacman();
            break;
        case 3:
            nave();
            break;
        default:
            break;
        }
    }

}
