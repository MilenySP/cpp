#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int a = 50;
    int b = 10;
    int c = 7;

    if (a>b && a>c){
    cout << "a es el mayor:" << a;
    } else if (b>a && b>c){
        cout<<"b es el mayor:" <<b;
    } else{
        cout<< "c es el mayor";
    }
    return 0;
}
