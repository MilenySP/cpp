#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) 
{
	
	int opcion= 0;
	
	while (true)
	{
		cout << "****"<< endl;
		cout << "MENU"<< endl;
		cout << "****"<< endl;
		
		cout << endl;
		cout << "1 - cafe y Granitas"<< endl;
		cout << "2 - reposteria"<< endl;
		cout << "0 - salir"<< endl;
		
		cout << "ingrese un opcion del menu:"<< endl;
		cin>> opcion;
		
        if (opcion == 0){
			break;
		}

        switch (opcion)
        {
        case 1:
        {
            system("cls");
			cout << "estas en el menu de cafe y Granitas "<< endl;
			system("pause");
            break;
        }
        case 2:
        {
            system("cls");
			cout << "estas en el menu de reposteria "<< endl;
			system("pause");
            break;
        }
        
        default: 
        {
        cout << "ingrese una opcion valida 0, 1, 2" << endl;
           system("pause");
            break;
        }
        }
	
	}
	
	cout << "saliste del sistema";
	return 0;
}