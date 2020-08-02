#include <iostream>
using namespace std;
string nombrecompleto (string nombre, string apellido){
    return nombre + "" + apellido;
}

int main(int argc, char const *argv[])
{
    string primerNombre = "";
    string primerApellido = "";

    cout << "ingrese su primer nombre:";
    cin >> primerNombre;
    cout << "ingrese su primer apellido:";
    cin >> primerApellido;

    cout << endl;
    cout << nombrecompleto (primerNombre, primerApellido);
    return 0;

}
