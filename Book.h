//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#ifndef JIGSAW_BOOK_H
#define JIGSAW_BOOK_H

#include <string>

class Book {
private:
    std::string name;
    std::string author;
    int quantity;

public:
    Book(const std::string& name, const std::string& author);
    Book(const std::string& name, const std::string& author, int quantity);
    Book(const Book& copia);

    std::string GetName();
    std::string GetAuthor();
    int GetQuantity();

    void SetName(const std::string& name);
    void SetAuthor(const std::string& name);
    void SetQuantity(const int& name);
};


#endif //JIGSAW_BOOK_H
