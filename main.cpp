#include <iostream>
#include "Libro.h"
#include "ListaLibros.h"

int main() {

    Libro libro1("Tokyo Ghoul", "Pato", "shueisha", 2018, 001);
    Libro libro2("Las aventuras de Juanita la santa", "kethcu", "skynet", 2018, 002);
    Libro libro3("Citizen", "Dinamo", "China", 2000, 003);

    ListaLibros *listaLibros = new ListaLibros();

    listaLibros->insertarFinal(libro1);
    listaLibros->insertarFinal(libro2);
    listaLibros->insertarFinal(libro3);

    cout<<"lista de libros disponibles ["<< listaLibros->totalNodos() <<"]\n" << listaLibros->toString()<<endl;


    return 0;
}