//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#include "Costumer.h"

Costumer::Costumer(std::string firstName, std::string lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
}

void Costumer::setFirstName(std::string firstName){
    this->firstName = firstName;
}

void Costumer::setLastName(std::string lastName){
    this->lastName = lastName;
}

std::string Costumer::getFirstName(){
    return firstName;
}

std::string Costumer::getLastName(){
    return lastName;
}