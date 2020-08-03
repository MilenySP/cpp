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

        cout << "BEBIDAS CALIENTE" << endl;
        cout << "****************" << endl;
        cout << "1-capuchino" << endl;
        cout << "2-expreso" << endl;
        cin >> opcionproducto;
        switch (opcionproducto)
        {
        case 1:
            agregarproducto("capuchino",1,40);
            agregarproducto("expreso",1,30);
            break;
        
        default:
        cout << "opcion no valida";
            break;
        }
        break;

        case 2:
    cout << "BEBIDAS FRIAS" << endl;
    cout << "*************" << endl;
    system ("pause");
        break;

        case 3:
    cout << "REPOSTERIA" << endl;
    cout << "**********" << endl;
    system ("pause");
        break;
    
    default:
        break;
    }

}