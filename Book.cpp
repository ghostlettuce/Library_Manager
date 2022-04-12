//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#include "Book.h"

//Constructors

Book::Book(const std::string &name, const std::string &author) {
    this->name = name;
    this->author = author;
    quantity = 1;
}

Book::Book(const std::string &name, const std::string &author, int quantity) {
    this->name = name;
    this->author = author;
    this->quantity = quantity;
}

Book::Book(const Book& copia) {
    name = copia.name;
    author = copia.author;
    quantity = copia.quantity;
}

//Getters

std::string Book::GetName() {
    return name;
}

std::string Book::GetAuthor() {
    return author;
}

int Book::GetQuantity() {
    return quantity;
}

//Setter

void Book::SetName(const std::string& name){
    this->name = name;
}

void Book::SetAuthor(const std::string& author){
    this->author = author;
}

void Book::SetQuantity(const int& quantity){
    this->quantity = quantity;
}