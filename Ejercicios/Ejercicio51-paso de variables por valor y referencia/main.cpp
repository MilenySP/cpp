#include <iostream>


using namespace std;

int sumar(int a,int b)
{
    int resultado=0;
    resultado=a+b;
    return resultado;
}

void sumarConvalorPorReferencia(int &a,int &b,int &resultado)
{
    a=10;
    cout << endl;
    b=12;
    cout << endl;
    resultado=a+b;
}

int main(int argc, char const *argv[])
{
    int num1=5;
    int num2=7;
    int r=0;

    sumarConvalorPorReferencia(num1,num2,r);
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<r<<endl;
    return 0;
}