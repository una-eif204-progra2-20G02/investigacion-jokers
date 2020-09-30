//
// Created by dayan on 30/9/2020.
//

#include "Presidente.h"
#include "Presidente.h"

presidente* presidente::instancia = NULL;


presidente::presidente() {  // constructor privado
    nombre = "Sin definir";
}

string  presidente::getNombre() {
    return nombre;
}
void presidente::setNombre(string n) {
    nombre = n;
}


presidente* presidente::getInstancia() {  // metodo que crea la unica instancia
    if (!instancia)
        instancia = new presidente();

    return instancia;

}


bool presidente::eliminarInstancia() {
    if (instancia != NULL)
    {
        delete instancia;
        instancia = NULL;
        return true;
    }
    return false;

}