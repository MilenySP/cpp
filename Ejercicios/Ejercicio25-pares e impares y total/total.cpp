#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int total = 0;

    for(int i= 1; i <= 10; i++)
    {
        if (i % 2 == 0){
            pares = pares + i;

        }
        else{impares = impares + i;

        }
        cout << i << "";
		
    }
     total = pares + impares;
    
    cout << endl;
    cout << endl;
    cout << "total pares:" << pares;
    cout << endl;
    cout << endl;
    cout << "total impares:" << impares;
    cout << endl;
    cout << endl;
    cout << "en total hay:" <<total ;

    return 0;
}
