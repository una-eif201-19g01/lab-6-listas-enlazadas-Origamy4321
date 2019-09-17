//
// Created by Maikol Guzman  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_LIBRO_H
#define LAB_6_LISTAS_ENLAZADAS_LIBRO_H

#include "iostream"
using namespace std;

class Libro {

private:

     string titulo;
     string autor;
     string editorial;
     int año;
     int isbn;

public:

    Libro();

    Libro(const string &titulo, const string &autor, const string &editorial, int año, int isbn);

    const string &getTitulo() const;

    void setTitulo(const string &titulo);

    const string &getAutor() const;

    void setAutor(const string &autor);

    const string &getEditorial() const;

    void setEditorial(const string &editorial);

    int getAño() const;

    void setAño(int año);

    int getIsbn() const;

    void setIsbn(int isbn);

    string toString();

};


#endif //LAB_6_LISTAS_ENLAZADAS_LIBRO_H
