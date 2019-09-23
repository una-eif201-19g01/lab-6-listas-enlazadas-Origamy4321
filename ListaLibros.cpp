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
        delete (actual);
    }
}

Nodo *ListaLibros::getPrimero() const {
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
    if (primero == nullptr) {
        primero = new Nodo(_libro, nullptr);
    } else {
        while (actual->getSiguiente() != nullptr)
            actual = actual->getSiguiente();
    }
    actual->setSiguiente(new Nodo(_libro, nullptr));
}

bool ListaLibros::eliminarFinal() {
    actual = primero;
    if (primero == nullptr) {
        return false;
    } else {
        while (actual->getSiguiente() != nullptr) {
            actual = actual->getSiguiente();
        }
        delete actual;
    }


}

bool ListaLibros::encuentraLibro(int n) {

    actual = primero;
    while (actual != NULL){
        if(n == actual->getLibro().getIsbn()){
            return true;}

        else{
            actual->getSiguiente();
        }
    } return false;
}

string ListaLibros::obtenerNombreLibro(int n) {

    actual = primero;
    while(actual !=NULL){
        if(n == actual->getLibro().getIsbn())
            return actual->getLibro().getTitulo();
        else
            actual->getSiguiente();}

    return "No se ha encontrado el libro";

}

string ListaLibros::toString() {

    string reporte;
    actual = primero;

    while (actual != nullptr){

        reporte += actual->toString();
        actual = actual->getSiguiente();


    }


    return reporte;
}

int ListaLibros::totalNodos() {

    int totalNodos = 0;
    actual = primero;

    while (actual != nullptr) {
        totalNodos ++;
        actual = actual->getSiguiente();
    }

    return totalNodos;
}
