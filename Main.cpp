//
// Created by dayan on 30/9/2020.
//
#include "Presidente.h"

void  main(  ) {
    presidente * p1= presidente::getInstancia();

    cout << "El nombre del presidente p1: "<< p1->getNombre()<< '\n';
    p1->setNombre("Dayana");
    cout << "El nombre del presidente p1: " << p1->getNombre() << '\n';

    presidente * p2 = presidente::getInstancia();
    cout << "El nombre del presidente p2: " << p2->getNombre() << '\n';

    p1 = presidente::getInstancia();
    p1->setNombre("Gerson");
    cout << "El nombre del presidente p1: " << p1->getNombre() << '\n';

    presidente::eliminarInstancia();

    presidente * p3 = presidente::getInstancia();
    p3->setNombre("Sebastian");
    cout << "El nombre del presidente p1: " << p3->getNombre() << '\n';

}
