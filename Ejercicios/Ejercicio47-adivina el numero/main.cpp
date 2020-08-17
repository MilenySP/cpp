#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto=0;
    int miNumero=0;

    //inicializa el numero rendom
    srand(time(NULL));

    //generar un numero entre 1 y 10
    numeroSecreto= rand()% 10+1;

    do
    {
         cout<<("Adivina el numero (1-10):");
         cin>>miNumero;

         if (numeroSecreto<miNumero)
         {
           cout<<("El numero secreto puede ser menor");
         }
         else{
             if (numeroSecreto>miNumero)
             {
                cout<<endl;
                cout<<("El numero secreto puede ser mayor");
             }
             
         }
         
        }while (numeroSecreto != miNumero);
        cout<<endl;
        cout<<endl;
        cout<<"Adivinastes";
    
    return 0;
}