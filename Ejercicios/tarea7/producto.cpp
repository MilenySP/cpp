#include <iostream>
#include "factura.h"

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
    cout << "1-lipton" << endl;
    cout << "2-pepsi" << endl;
    cout << "3-link" << endl;
    cout << endl;
        

    cout << "ingresar una opcion:";
    cin >> opcionproducto;

        switch (opcionproducto)
        {
        case 1:
            agregarproducto("1 lipton - L 20.00",1,20);
            break;
        case 2:
            agregarproducto("1 pepsi - L 20.00",1,20);
            break;
        case 3:
            agregarproducto("1 link - L 20.00",1,20);
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
        case 3:
        {
    cout << "**********" << endl;
    cout << "REPOSTERIA" << endl;
    cout << "**********" << endl;
    cout << "1-Torta Clasica" << endl;
    cout << "2-Bollos" << endl;
    cout << "3-Brownies" << endl;
    cout << endl;
        

    cout << "ingresar una opcion:";
    cin >> opcionproducto;

        switch (opcionproducto)
        {
        case 1:
            agregarproducto("1 Torta Clasica - L 40.00",1,40);
            break;
        case 2:
            agregarproducto("1 Bollos - L 30.00",1,30);
            break;
        case 3:
            agregarproducto("1 Brownies - L 20.00",1,20);
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
    }

}