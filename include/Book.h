//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#ifndef JIGSAW_BOOK_H
#define JIGSAW_BOOK_H

#include "../include/Author.h"

class Book {
public:
    //Constructor
    Book();
    Book(const std::string& name, const Author& author);
    Book(const std::string& name, const Author& author, int quantity);
    Book(const Book& copy);

    //Getter
    [[nodiscard]] std::string GetName() const;
    [[nodiscard]] Author GetAuthor() const;
    [[nodiscard]] int GetQuantity() const;

    //Setter
    void SetName(const std::string& name);
    void SetAuthor(const Author& author);
    void SetQuantity(const int& quantity);

    //Methods
    void PrintBook();

private:
    std::string name_;
    Author author_;
    int quantity_;
};


#endif //JIGSAW_BOOK_H
