#include <iostream>

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

        switch(op)
        {
        case '1':
            cout<<"Ingrese 5 numeros enteros"<<endl;
            capturarEnteros();
            break;

        case '2':
            break;

        case '3':
            break;

        default:
            break;
        }

    }while (op != '0');

    return 0;
}

