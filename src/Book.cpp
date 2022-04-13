//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#include "../include/Book.h"

//Constructors

Book::Book(const std::string &name, const Author& author) {
    this->name = name;
    this->author = author;
    quantity = 1;
}

Book::Book(const std::string &name, const Author& author, int quantity) {
    this->name = name;
    this->author = author;
    this->quantity = quantity;
}

Book::Book(const Book& copia) {
    name = copia.name;
    author = copia.author;
    quantity = copia.quantity;
}

//Setter

void Book::SetName(const std::string& name){
    this->name = name;
}

void Book::SetAuthor(const Author& author){
    this->author = author;
}

void Book::SetQuantity(const int& quantity){
    this->quantity = quantity;
}

//Getters

std::string Book::GetName() {
    return name;
}

Author Book::GetAuthor() {
    return author;
}

int Book::GetQuantity() {
    return quantity;
}
