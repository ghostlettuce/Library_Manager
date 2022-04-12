//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#include "Author.h"

void Author :: SetFirstName(const string& first_name){
    name = first_name;
}

void Author :: SetLastName(const string& last_name1){
    last_name = last_name1;
}

void Author :: SetGender(const Gender& Gender1){
    gender = Gender1;
}
void Author ::  SetMail(const string& Mail){
    mail = Mail;
}

void Author :: SetBooks(const int& Books){
    books = Books;
}

string Author :: GetFirstName(){
    return name;
}

Gender Author :: GetGender(){
    return gender;
}

string Author :: GetLastName(){
    return last_name;
}

string Author :: GetMail(){
    return mail;
}

int Author :: GetBooks(){
    return books;
}
