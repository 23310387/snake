#include<iostream>
#include<Foco.hpp>

int main(int argc, char const *argv[])
{
    Foco foco1;
    Foco foco2;

    std :: cout<<"Encendido foco"<<std::endl;
    foco1.Encender();
    std :: cout<<"Apagar foco"<<std::endl;
    foco1.Apagar();


    return 0;
}
