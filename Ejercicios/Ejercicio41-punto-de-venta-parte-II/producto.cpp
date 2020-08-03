#include <iostream>
using namespace std;



void producto(int opcion)
{
    system ("cls");
    switch (opcion)
    {
    case 1:
    cout << "BEBIDAS CALIENTE" << endl;
    cout << "****************" << endl;
    system ("pause");
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