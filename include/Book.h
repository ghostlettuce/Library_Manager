//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#ifndef JIGSAW_BOOK_H
#define JIGSAW_BOOK_H

#include <string>

#include "../include/Author.h"

class Book {
public:
    //Constructor
    Book();
    Book(const std::string& name, const Author& author);
    Book(const std::string& name, const Author& author, int quantity);
    Book(const Book& copia);

    //Getter
    std::string GetName() const;
    Author GetAuthor() const;
    int GetQuantity() const;

    //Setter
    void SetName(const std::string& name);
    void SetAuthor(const Author& author);
    void SetQuantity(const int& quatity);

    //Methods
    void PrintBook();

private:
    std::string name_;
    Author author_;
    int quantity_;
};


#endif //JIGSAW_BOOK_H
