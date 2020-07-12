#include  <iostream> 

/* ejecutar este programa utilizando el pausador de la consola o añadir su propio getch, system("pause") o bucle de entrada */

using namespace std;

int main(int argc, char** argv){

	// Datos de entrada 
	int a = 0;
	int b = 0;
	int resultado = 0;
	
	resultado = a+b;
	
 cout <<  "insertar el valor de a: " ;
	cin >> a;
	
	cout << endl;
	
 cout <<  "insertar el valor de b: " ;
	cin >> b;
	
	
	//Proceso
 resultado = a + b;
	
	//Salida
	cout << endl; 
 cout <<  "La suma de a + b es: "  << resultado;
	
	
	return 0;
}
