#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float numero=0;
    float resultado=0;
    
    

    cout<<"Digite un numero:";
	cin>>numero ;
    resultado=(sqrt(numero));
    
    system("cls");
    cout<<endl;
    cout<<"La raiz cuadrada de "<<numero<<" es:"<<resultado;
    
    return 0;
}