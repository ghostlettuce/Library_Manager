//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#include "../include/Costumer.h"

//Constructors

Costumer::Costumer() {
    first_name_ = "";
    last_name_ = "";
    requested_books_ = std::set<Book> ();
}

Costumer::Costumer(const std::string& first_name, const std::string& last_name) {
    first_name_ = first_name;
    last_name_ = last_name;
    requested_books_ = std::set<Book> ();
}

//Getters

std::string Costumer::GetFirstName() const {
    return first_name_;
}

std::string Costumer::GetLastName() const {
    return last_name_;
}

std::set<Book> Costumer::GetRequestedBooks() const {
    return requested_books_;
}

//Setters

void Costumer::SetFirstName(const std::string& first_name){
    first_name_ = first_name;
}

void Costumer::SetLastName(const std::string& last_name){
    last_name_ = last_name;
}

void Costumer::SetRequestedBooks(const std::set<Book>& requestedBooks) {
    requested_books_ = requestedBooks;
}

//Methods

void Costumer::RequireBook(const Book& book){
    requested_books_.insert(book);
}

void Costumer::ReturnBook(const Book& book){
    requested_books_.erase(book);
}

void Costumer::PrintCostumer() {
    std::cout << first_name_ << " " << last_name_;

    for(auto r : requested_books_){
        r.PrintBook();
    }
}