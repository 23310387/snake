#include <SerieNavidad.hpp>
#include <Lienzo.hpp>
#include <Vector.hpp>
#include <unistd.h> //entrada a unix


int main (int argc, char const *argv[]){

    Vector p(0,5);
    Vector t(100,100);

    Lienzo lienzo (p, t);

    SerieNavidad serie (150);
    SerieNavidad serie2(150);

    int incremento = 0;
    bool estado = true ;
    while (true) {
        //celula que explota
        serie.Alternar(estado);
        lienzo.Dibujar(serie);
        serie.Apagar ();
        estado = estado ?  false : true ;

        //incremento 
        serie2.Apagar();
        serie2.Encender(5);
        incremento++;

        sleep (1);
        lienzo.Limpiar ();

    }

    return 0;
}