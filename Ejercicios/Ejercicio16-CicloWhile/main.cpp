#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	
	int a= 5;
	int b= 2;
	
	while (a>b){
		cout << "ingrese el valor de a:" << endl;
		cin >> a;
	}
	cout << endl;
	cout << "saliste del ciclo";
	return 0;
}
