//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#include "../include/Book.h"

//Constructors

Book::Book() {
    name_ = "";
    author_ = Author();
    quantity_ = 0;
}

Book::Book(const std::string &name, const Author& author) {
    name_ = name;
    author_ = author;
    quantity_ = 1;
}

Book::Book(const std::string &name, const Author& author, int quantity) {
    name_ = name;
    author_ = author;
    quantity_ = quantity;
}

Book::Book(const Book& copy) {
    name_ = copy.name_;
    author_ = copy.author_;
    quantity_ = copy.quantity_;
}

//Setter

void Book::SetName(const std::string& name){
    name_ = name;
}

void Book::SetAuthor(const Author& author){
    author_ = author;
}

void Book::SetQuantity(const int& quantity){
    quantity_ = quantity;
}

//Getters

std::string Book::GetName() const {
    return name_;
}

Author Book::GetAuthor() const {
    return author_;
}

int Book::GetQuantity() const {
    return quantity_;
}

//Methods

void Book::PrintBook() {
    std::cout << name_ << ", ";
    author_.PrintAuthor();
    std::cout << "number of books " << quantity_;
}
