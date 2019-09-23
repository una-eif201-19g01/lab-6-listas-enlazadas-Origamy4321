//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
#define LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H

#include "Nodo.h"

using namespace std;

class ListaLibros {


    Nodo *primero;
    Nodo *actual;

public:

    ListaLibros();

    virtual ~ListaLibros();

    Nodo *getPrimero() const;

    void setPrimero(Nodo *primero);

    Nodo *getActual() const;

    void setActual(Nodo *actual);

    string toString();

    void insertarFinal(Libro &_libro);

    bool eliminarFinal();

    bool encuentraLibro(int);

    string obtenerNombreLibro(int);

    int totalNodos();


};

#endif //LAB_6_LISTAS_ENLAZADAS_LISTALIBROS_H
