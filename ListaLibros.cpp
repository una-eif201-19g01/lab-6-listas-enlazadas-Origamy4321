//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "ListaLibros.h"

ListaLibros::ListaLibros() {
    primero = nullptr;
    actual = nullptr;
}

ListaLibros::~ListaLibros() {

    while (primero != nullptr) {
        actual = primero;
        primero = primero->getSiguiente();
        delete(actual);
    }
}

Nodo *ListaLibros::getPrimero() const{
    return primero;
}

void ListaLibros::setPrimero(Nodo *primero) {
    ListaLibros::primero = primero;
}

Nodo *ListaLibros::getActual() const {
    return actual;
}

void ListaLibros::setActual(Nodo *actual) {
    ListaLibros::actual = actual;
}

void ListaLibros::insertarFinal(Libro &_libro) {

    actual = primero;
    if(primero == nullptr){


    }

}

void ListaLibros::eliminarFinal() {

}

bool ListaLibros::encuentraLibro(int) {
    return false;
}

string ListaLibros::obtenerNombreLibro(int) {
    return std::__cxx11::string();
}
