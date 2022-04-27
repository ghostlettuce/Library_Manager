//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#include "../include/Author.h"

//Constructor

Author::Author() {
    first_name_ = "";
    last_name_ = "";
    gender_ = Other;
    mail_ = "";
}

Author::Author(const std::string& first_name, const std::string& last_name, const Gender& gender, const std::string& mail){
    first_name_ = first_name;
    last_name_ = last_name;
    gender_ = gender;
    mail_ = mail;
}

//Getter

std::string Author::GetFirstName() const {
    return first_name_;
}

Gender Author::GetGender() const {
    return gender_;
}

std::string Author::GetLastName() const {
    return last_name_;
}

std::string Author::GetMail() const {
    return mail_;
}

int Author::GetBooks() const {
    return books_;
}

//Setter

void Author::SetFirstName(const std::string& first_name){
    first_name_ = first_name;
}

void Author::SetLastName(const std::string& last_name){
    last_name_ = last_name;
}

void Author::SetGender(const Gender& gender){
    gender_ = gender;
}

void Author:: SetMail(const std::string& mail){
    mail_ = mail;
}

void Author::SetBooks(const int& books){
    books_ = books;
}

//Operators

bool Author::operator<(const Author& author) const{
    std::string auth1_name = first_name_ + " " + last_name_;
    std::string auth2_name = author.first_name_ + " " + author.last_name_;

    return auth1_name < auth2_name;
}

//Methods

void Author::PrintAuthor() {
    std::cout << first_name_ << " " << last_name_ << ", " << gender_ << ", " << mail_ << ", number off books: " << books_;
}
