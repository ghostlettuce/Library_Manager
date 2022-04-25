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

//Setter

void Author :: SetFirstName(const std::string& first_name){
    first_name_ = first_name;
}

void Author :: SetLastName(const std::string& last_name){
    last_name_ = last_name;
}

void Author :: SetGender(const Gender& gender){
    gender_ = gender;
}
void Author ::  SetMail(const std::string& mail){
    mail_ = mail;
}

void Author :: SetBooks(const int& books){
    books_ = books;
}

//Getter

std::string Author :: GetFirstName(){
    return first_name_;
}

Gender Author :: GetGender(){
    return gender_;
}

std::string Author :: GetLastName(){
    return last_name_;
}

std::string Author :: GetMail(){
    return mail_;
}

int Author :: GetBooks(){
    return books_;
}

//Methods

void Author :: PrintAuthor() {
    std::cout << first_name_ << " " << last_name_ << ", " << gender_ << ", " << mail_ << ", number off books: " << books_;
}
