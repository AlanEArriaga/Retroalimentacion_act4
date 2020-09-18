#include <iostream>
#include "Personaje.h"

using namespace std;

void capturarEnteros(){
    int enteros[5], suma=0;
    float promedio;

    for(int i=0;i<5;i++)
    {
        cin>>enteros[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<enteros[i]<<endl;
    }
    for(int i=0;i<5;i++)
    {
        suma += enteros[i];
    }
    cout<<"Suma: "<<suma<<endl;
    cout<<"Promedio: "<<suma/5<<endl;
}

void mostrar(int n, char cadena[]){
    for(int i=0;i<n;i++){
        cout<<cadena<<endl;
    }
}

int main(){
    char op, cadena[20];
    int n;

    do
    {
        cout<<"1- Capturar enteros"<<endl;
        cout<<"2- Mostrar cadena n veces"<<endl;
        cout<<"3- Agregar personaje"<<endl;
        cout<<"4- Mostrar personajes"<<endl;
        cout<<"0- Salir"<<endl;
        cin>>op;

        fflush(stdin);

        switch(op)
        {
        case '1':
            cout<<"Ingrese 5 numeros enteros"<<endl;
            capturarEnteros();
            break;

        case '2':
            cout<<"Escirbe una cadena de hasta 20 caracteres: ";
            fflush(stdin);
            cin.getline(cadena,20);
            cout<<endl<<"n: ";
            cin>>n;
            cout<<endl;
            mostrar(n,cadena);
            break;

        case '3':
            capturaPersonaje();
            break;

        case '4':
            mostrarPersonajes();
            break;

        default:
            break;
        }

    }while (op != '0');

    return 0;
}

