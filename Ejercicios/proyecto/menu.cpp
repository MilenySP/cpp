 #include <iostream>
 #include "snake.h"
 #include "menu.h"

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
		cout << "2 - nave" << endl;
		cout << "0 . Salir" << endl;

        cout << endl;
        cout << "ingreseun numero y precione enter";
        cin >> opcion;


        switch (opcion)
        {
        case 1:
            //snake();
            break;
        case 5:
            salir;
            break;
        default:
            break;
        }
    }

}