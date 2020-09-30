//
// Created by dayan on 30/9/2020.
//

#ifndef INVESTIGACION_JOKERS_PRESIDENTE_H
#define INVESTIGACION_JOKERS_PRESIDENTE_H


class Presidente {
private:
    string    nombre;
    static presidente* instancia; // puntero a la unica instancia
    presidente();//constructor privado

public:
    static presidente* getInstancia();
    string  getNombre();
    void setNombre(string n);
    static bool eliminarInstancia();
    // ~presidente(); //  No implementar, no puede eliminar la memoria de la instacia
};


#endif //INVESTIGACION_JOKERS_PRESIDENTE_H
