//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#ifndef JIGSAW_BOOK_H
#define JIGSAW_BOOK_H

#include <string>

#include "../include/Author.h"

class Book {
private:
    std::string name;
    Author author;
    int quantity;

public:
    Book(const std::string& name, const Author& author);
    Book(const std::string& name, const Author& author, int quantity);
    Book(const Book& copia);

    void SetName(const std::string& name);
    void SetAuthor(const Author& name);
    void SetQuantity(const int& name);

    std::string GetName();
    Author GetAuthor();
    int GetQuantity();
};


#endif //JIGSAW_BOOK_H
