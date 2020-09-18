#include <iostream>

using namespace std;

int main(){
    char op;

    do
    {
        cout<<"1- Capturar enteros"<<endl;
        cout<<"2- Mostrar cadena n veces"<<endl;
        cout<<"3- Agregar personaje"<<endl;
        cout<<"0- Salir"<<endl;
        cin>>op;

        fflush(stdin);

    }while (op != 0);
}
