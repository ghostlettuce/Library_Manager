//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#include "../include/Author.h"

//Setter

void Author :: SetFirstName(const std::string& first_name){
    name = first_name;
}

void Author :: SetLastName(const std::string& last_name1){
    last_name = last_name1;
}

void Author :: SetGender(const Gender& Gender1){
    gender = Gender1;
}
void Author ::  SetMail(const std::string& Mail){
    mail = Mail;
}

void Author :: SetBooks(const int& Books){
    books = Books;
}

//Getter

std::string Author :: GetFirstName(){
    return name;
}

Gender Author :: GetGender(){
    return gender;
}

std::string Author :: GetLastName(){
    return last_name;
}

std::string Author :: GetMail(){
    return mail;
}

int Author :: GetBooks(){
    return books;
}
