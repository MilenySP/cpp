#include <iostream>
using namespace std;

double subtotal;
double total;
double impuesto;
string listaproducto;

void agregarproducto(string descripcion, int cantidad, double precio)
{
    listaproducto = listaproducto + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    impuesto = (subtotal * 0.15);
    total = subtotal + impuesto;
}

void imprimirFactura()
{
    system ("cls" );
    cout <<  "*******"  << endl;
    cout <<  "Factura"  << endl;
    cout <<  "*******"  << endl; 
    cout << endl;
    cout << endl;


 cout <<  "Productos: "  << endl;
    cout << listaproducto;
    
    cout << endl;
    cout <<  "subtotal: "  << subtotal;
    cout << endl;
    cout <<  "El total a pagar es: "  << total;
    cout << endl;
    cout << endl;
    system("pause");
}

