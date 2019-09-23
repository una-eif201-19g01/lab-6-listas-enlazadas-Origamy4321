//
// Created by Maikol Guzman  on 2019-09-16.
//

#include "Libro.h"

Libro::Libro() {}

Libro::Libro(const string &titulo, const string &autor, const string &editorial, int anno, int isbn) : titulo(titulo),
                                                                                                      autor(autor),
                                                                                                      editorial(
                                                                                                              editorial),
                                                                                                      anno(anno),
                                                                                                      isbn(isbn) {}

const string &Libro::getTitulo() const {
    return titulo;
}

void Libro::setTitulo(const string &titulo) {
    Libro::titulo = titulo;
}

const string &Libro::getAutor() const {
    return autor;
}

void Libro::setAutor(const string &autor) {
    Libro::autor = autor;
}

const string &Libro::getEditorial() const {
    return editorial;
}

void Libro::setEditorial(const string &editorial) {
    Libro::editorial = editorial;
}

int Libro::getAnno() const {
    return anno;
}

void Libro::setAnno(int anno) {
    Libro::anno = anno;
}

int Libro::getIsbn() const {
    return isbn;
}

void Libro::setIsbn(int isbn) {
    Libro::isbn = isbn;
}

string Libro::toString() {

    string reporte;

    reporte = +"Titulo del libro: " + getAutor() + "\n" + "el autor del libro es : " + getAutor() + "\n" +
              "el año de publicacion del libro es:  " + to_string(getAnno()) + "\n" + "el codigo ISBN del libro es: " +
              to_string(getIsbn()) + "\n";

    return reporte;
}


