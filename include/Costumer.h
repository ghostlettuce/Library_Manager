//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#ifndef JIGSAW_COSTUMER_H
#define JIGSAW_COSTUMER_H

#include <string>
#include <set>

#include "../include/Book.h"

class Costumer {
private:
    std::string firstName;
    std::string lastName;
    std::set<Book> requestedBooks;
public:
    Costumer(const std::string& firstName, const std::string& lastName);

    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setRequestedBooks(const std::set<Book>& requestedBooks);

    std::string getFirstName();
    std::string getLastName();
    std::set<Book> getRequestedBooks();
};


#endif //JIGSAW_COSTUMER_H
