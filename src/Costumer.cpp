//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#include "../include/Costumer.h"

//Contructors

Costumer::Costumer(const std::string& firstName, const std::string& lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
}

//Setters

void Costumer::setFirstName(const std::string& firstName){
    this->firstName = firstName;
}

void Costumer::setLastName(const std::string& lastName){
    this->lastName = lastName;
}

void Costumer::setRequestedBooks(const std::set<Book>& requestedBooks) {
    this->requestedBooks = requestedBooks
}

//Getters

std::string Costumer::getFirstName(){
    return firstName;
}

std::string Costumer::getLastName(){
    return lastName;
}

std::set<Book> Costumer::getRequestedBooks() {
    return requestedBooks;
}