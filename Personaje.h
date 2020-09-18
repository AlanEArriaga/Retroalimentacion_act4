#ifndef PERSONAJE_H_INCLUDED
#define PERSONAJE_H_INCLUDED
#include <iostream>

using namespace std;

struct PERSONAJE_H_INCLUDED
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}personajes[5];

unsigned int cont=0;
void capturaPersonaje(){
    if(cont<5){
    cout<<"Nombre: ";
    cin.getline(personajes[cont].nombre,20);
    cout<<endl;
    cout<<"Tipo: ";
    cin.getline(personajes[cont].tipo,20);
    cout<<endl;
    cout<<"Fuerza: ";
    cin>>personajes[cont].fuerza;
    cout<<endl;
    cout<<"Salud: ";
    cin>>personajes[cont].salud;
    cont++;
    }

    else {
        cout<<"El arreglo de personajes esta lleno"<<endl;
    }
}

void mostrarPersonajes(){
    for(int i=0;i<cont;i++){
        cout<<"Nombre: "<<personajes[i].nombre<<endl;
        cout<<"Tipo: "<<personajes[i].tipo<<endl;
        cout<<"Fuerza: "<<personajes[i].fuerza<<endl;
        cout<<"Salud: "<<personajes[i].salud<<endl;
    }
}


#endif // PERSONAJE_H_INCLUDED
