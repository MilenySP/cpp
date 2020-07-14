#include  <iostream>  

using namespace std;

int main(int argc, char const *argv[])
{
    	// Datos de entrada 
	int a = 0;
	int b = 0;
	int resultado = 0;
	
 cout <<  "Entrada el valor de a: " ;
	cin >> a;
	
	cout << endl;
	
 cout <<  "Entrada el valor de b: " ;
	cin >> b;
	
	
	//Proceso
 resultado = a + b;
     cout << endl;
 cout <<  "Resultado de la suma es: "  << resultado;
    cout << endl;

 resultado = a - b;
    cout << endl;
 cout <<  "Resultado de la resta es: "  << resultado;
	cout << endl;

 resultado = a * b;
    cout << endl;
 cout <<  "Resultado de la multiplicacion  es: "  << resultado;
    cout << endl;
    
 resultado = a / b;
    cout << endl;
 cout <<  "Resultado de la division es: "  << resultado;
	cout << endl;


    return 0;
}
