

#include <iostream>
using namespace std;

int numero = 0;
int sumar (int a, int b);

int main(int argc, char const *argv[])
{
    numero = 5;
    cout << endl;
    cout << sumar (5, 7);
    cout << endl;

    cout << numero;


    return 0;
}

int sumar (int a, int b){

    cout << endl;
    numero = 7;
    
    cout << endl;
    return a + b;
}

