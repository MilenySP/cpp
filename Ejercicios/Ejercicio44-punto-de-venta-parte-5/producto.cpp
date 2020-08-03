#include <iostream>
using namespace std;

extern void agregarproducto(string descripcion, int cantidad, double precio);


void producto(int opcion)
{
    system ("cls");
    int opcionproducto = 0;
    switch (opcion)
    {
    case 1:
    {

        cout << "****************" << endl;
        cout << "BEBIDAS CALIENTE" << endl;
        cout << "****************" << endl;
        cout << "1-capuchino" << endl;
        cout << "2-expreso" << endl;
        cout << endl;
        
        cout << "ingresar una opcion:";
        cin >> opcionproducto;

        switch (opcionproducto)
        {
        case 1:
            agregarproducto("1 capuchino - L 40.00",1,40);
            break;
        case 2:
            agregarproducto("1 expreso - L 30.00",1,30);
            break;
        
        default:
        {
        cout << "opcion no valida";
            return;
            break;
        }
        }
        cout << endl;
        cout << "producto agregado" << endl << endl;
        system ("pause");
        break;
    }
        case 2:
        {
    cout << "*************" << endl;
    cout << "BEBIDAS FRIAS" << endl;
    cout << "*************" << endl;
    system ("pause");
        break;
    }
        case 3:
        {
    cout << "**********" << endl;
    cout << "REPOSTERIA" << endl;
    cout << "**********" << endl;
    system ("pause");
        break;
    }
    default:
        break;
    }

}