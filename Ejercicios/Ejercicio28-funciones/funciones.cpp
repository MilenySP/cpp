#include <iostream>

using namespace std;

int suma ()
{
    return 5 + 7;
}

string nombrecompleto()
{
    string nombre = "Juan";
    string apellido = " Perez";
    return "Juan Perez";
}

int main(int argc, char const *argv[])
{
    int resultado = suma();
    string nombreyapellido = nombrecompleto();
    cout << resultado;

    cout << endl;
    cout << nombreyapellido;

    return 0;
}
