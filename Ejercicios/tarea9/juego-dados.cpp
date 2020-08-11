#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(int argc, char const *argv[])
{
    int respuesta=0;
    int numero=0;
    srand(time(NULL));
   do
   {
   system("cls");    
       
   numero= rand() % 50+1;   cout<< "Primer numero del dado:"<<numero;
   cout <<endl;
   
   numero= rand() % 50+1;   cout<< "segundo numero del dado:"<<numero;
   cout <<endl;

   cout <<"¿Desea jugar nuevamente? (1.si  2.no):" ;
   cin>>respuesta;
   }

   while (respuesta==1); 

   system("cls");
   cout <<endl;
   cout <<"¡Gracias por jugar!";


    return 0;
}