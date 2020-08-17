#include <iostream>

using namespace std;

int numeroSecreto=7;

void adivinarNumerosecreto(int miNumero)
{
if (miNumero == numeroSecreto)
{
    cout<<"Adivinastes"<<endl;
}
   else
   {
       
    cout<<"Intento fallido con:"<<miNumero<<endl;
    int otroNumero=0;
    cout<<"Ingrese otro numero:";
    cin>>otroNumero;
    adivinarNumerosecreto(otroNumero);

   }

}

int main(int argc, char const *argv[])
{
    adivinarNumerosecreto(5);
    return 0;
}