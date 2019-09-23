//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_NODO_H
#define LAB_6_LISTAS_ENLAZADAS_NODO_H

#include "Libro.h"
using namespace std;

class Nodo {

    Libro libro;
    Nodo *siguiente;

public:

    Nodo();

    Nodo(const Libro &libro, Nodo *siguiente);

    const Libro &getLibro() const;

    void setLibro(const Libro &libro);

    Nodo *getSiguiente() const;

    void setSiguiente(Nodo *siguiente);

    string toString();


};


#endif //LAB_6_LISTAS_ENLAZADAS_NODO_H
