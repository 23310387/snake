#pragma once
#include <iostream>

using namespace std;

class Foco
{
private:
    bool encendido;
public:
    Foco() {} //constructor
    ~Foco() {} //destructor

    void Encender(){
        this ->encendido = true; //this representa el objeto actual, conla flecha apunta ala memoria (puntero)
    }

    void  Apagar (){
        this ->encendido = false;
    }
    void Imprimir (){
        if (this-> encendido){
            cout<<"O";
        }
        else
        {
            cout<<".";
        }
    }
};