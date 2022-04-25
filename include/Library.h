//
// Created by Rafael Simão Borges Anunciada on 13/04/2022.
//

#ifndef JIGSAW_LIBRARY_H
#define JIGSAW_LIBRARY_H

#include <vector>
#include <fstream>
#include "../include/Costumer.h"

class Library {
public:
    //Constructor
    Library();
    Library(const std::string& book_list_file, const std::string& costumer_list_file);

    //Getter
    std::set<Book> GetAvailableBooks();
    std::set<Book> GetRequiredBooks();
    std::set<Book> GetAllBooks();
    std::vector<Costumer> GetCostumers();

    //Setter
    void SetAvailableBooks(const std::set<Book>& book);
    void SetRequiredBooks(const std::set<Book>& book);
    void SetCostumers(const std::vector<Costumer>& costumer);

    //Methods
    void ReloadAuthors();
    void ReloadAllBooks();
    void CreateCostumer(const std::string& first_name, const std::string& last_name);
    void BookRequiring(const Book& book_to_require);
    void BookReturn(const Book& book_to_return);
    void AddBook(const Book& book_to_add);

    void PrintRequiredBooks();
    void PrintCostumersList();
    void PrintBookList();
    void PrintAuthorList();

private:
    std::set<Book> available_books_;
    std::set<Book> required_books_;
    std::set<Book> all_books_;
    std::vector<Costumer> costumers_;
    std::set<Author> authors_;

    static std::vector<std::string> CommaSeparated(const std::string& initial_str, const std::string& delimiter);
};


#endif //JIGSAW_LIBRARY_H
