#include <iostream>
using namespace std;

double subtotal;
string listaproducto;

void agregarproducto(string descripcion, int cantidad, double precio)
{
    listaproducto = listaproducto + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}
