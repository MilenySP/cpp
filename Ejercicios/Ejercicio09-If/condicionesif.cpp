#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numerosecreto = 7;
    int numero= 0;
    cout <<"ingrese un numero: ";
    cin >> numero;

    cout <<endl;

    if (numero == numerosecreto)
    {
        cout << "adivinaste el numero secreto: " <<numero;
    }else {
         cout <<"no adivinaste ";

    }
   
    return 0;
}