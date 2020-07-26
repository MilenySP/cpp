#include  <iostream> 


using namespace std;

int main(int argc, char** argv[])
{
	int opcion = 0;
	while(true){
		
		system ("cls" );
        
        cout<<  "****"  << endl;
        cout<<  "Menu"  << endl;
        cout<<  "****"  << endl;

		cout<< endl;
		cout<< endl;

        cout<<  "1 - Bebidas calientes:"  << endl;
        cout<<  "2 - Bebidas heladas: "  << endl;
        cout<<  "3 - Reposteria: "  << endl;
        cout<<  "0 - Salir: "  << endl;
		
		cout<<endl;
 cout<<  "Entrada una opcion del menu: "<<endl;
		cin>>opcion;
		
		if(opcion == 1){
			system ("cls" );
 cout<<  "********************* "<<  endl;
 cout<<  "Bebidas calientes : "<<endl;
 cout<<  "********************* "<<  endl;
		
			system("pausa" );
		}
		
		if (opcion == 2){
			system ("cls" );
 cout<<  "****************"  << endl;
 cout<<  "Bebidas heladas: "<<endl;
 cout<<  "****************"  << endl;
			
			system ("pausa" );
		}
		
		if (opcion == 3){
			system ("cls" );
 cout<<  "***********"  << endl;
 cout<<  "Reposteria: "<<endl;
 cout<<  "***********"  << endl;
			
			system ("pausa" );
		}
		
		if (opcion < 0 || opcion > 3){
			system ("cls" );
 cout<<  "ingrese una opcion valida: "<<endl;
			
			system ("pausa" );
		}
		
		else(opcion == 0){
			break;
        }
    }

	return 0;

}