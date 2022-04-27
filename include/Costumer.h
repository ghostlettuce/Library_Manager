//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#ifndef JIGSAW_COSTUMER_H
#define JIGSAW_COSTUMER_H

#include <set>
#include "../include/Book.h"

class Costumer {
public:
    //Constructor
    Costumer();
    Costumer(const std::string& first_name, const std::string& last_name);

    //Getter
    [[nodiscard]] std::string GetFirstName() const;
    [[nodiscard]] std::string GetLastName() const;
    [[nodiscard]] std::set<Book> GetRequestedBooks() const;

    //Setter
    void SetFirstName(const std::string& first_name);
    void SetLastName(const std::string& last_name);
    void SetRequestedBooks(const std::set<Book>& requested_books);

    //Methods
    void RequireBook(const Book& book);
    void ReturnBook(const Book& book);

    void PrintCostumer();
private:
    std::string first_name_;
    std::string last_name_;
    std::set<Book> requested_books_;
};


#endif //JIGSAW_COSTUMER_H
