//
// Created by Rafael Simão Borges Anunciada on 13/04/2022.
//

#include "../include/Library.h"

//Constructor

Library::Library(){
    available_books_ = std::set<Book> ();
    required_books_ = std::set<Book> ();
    all_books_ = std::set<Book> ();
    costumers_ = std::vector<Costumer> ();
}

Library::Library(const std::string& book_list_file, const std::string& costumer_list_file){
    std::ifstream book_list(book_list_file);
    std::ifstream costumer_list(costumer_list_file);

    std::string file_entry;
    std::vector<std::string> file_entry_separeted;

    Gender author_gender;

    while (book_list.good()) {
        std::getline(book_list, file_entry);
        file_entry_separeted = CommaSeparated(file_entry, ",");

        if (file_entry_separeted.at(3) == "M") {
            author_gender = Male;
        } else if (file_entry_separeted.at(3) == "F") {
            author_gender = Female;
        } else {
            author_gender = Other;
        }

        Author author(file_entry_separeted.at(1), file_entry_separeted.at(2), author_gender, file_entry_separeted.at(4));
        Book book(file_entry_separeted.at(0), author);

        available_books_.insert(book);
    }

    while(costumer_list.good()){
        std::getline(costumer_list, file_entry);
        file_entry_separeted = CommaSeparated(file_entry, ",");

        Costumer costumer(file_entry_separeted.at(0), file_entry_separeted.at(1));

        costumers_.push_back(costumer);
    }

    book_list.close();
    costumer_list.close();
}

//Getter

std::set<Book> Library::GetAvailableBooks(){
    return available_books_;
}

std::set<Book> Library::GetRequiredBooks(){
    return required_books_;
}

std::set<Book> Library::GetAllBooks(){
  return all_books_;
}

std::vector<Costumer> Library::GetCostumers(){
    return costumers_;
}

//Setter

void Library::SetAvailableBooks(const std::set<Book>& book){
    available_books_ = book;
}

void Library::SetRequiredBooks(const std::set<Book>& book){
    required_books_ = book;
}

void Library::SetCostumers(const std::vector<Costumer>& costumer){
    costumers_ = costumer;
}

//Methods

void Library::ReloadAllBooks(){
    std::set<Book> all_books = available_books_;

    for (auto r : required_books_) {
        for (auto a : all_books) {
            if (r.GetName() == a.GetName()) {
                a.SetQuantity(a.GetQuantity() + r.GetQuantity());
                break;
            }
        }
        if (!all_books.contains(r)) {
            all_books.insert(r);
        }
    }

    all_books_ = all_books;

    ReloadAuthors();
}

void Library::ReloadAuthors(){
    std::set<Author> authors;

    for (auto b : all_books_) {
        authors.insert(b.GetAuthor());
    }

    authors_ = authors;
}

void Library::CreateCostumer(const std::string& first_name, const std::string& last_name){
    Costumer costumer(first_name, last_name);
    costumers_.push_back(costumer);
}

void Library::BookRequiring(const Book& book_to_require){
    if (!available_books_.contains(book_to_require)) {
        std::cout << "Error: This book is not available" << std::endl;
        return;
    }

    for (auto r : available_books_) {
        if (r.GetName() == book_to_require.GetName()) {
            if(r.GetQuantity() == 1) {
                available_books_.erase(r);
            } else {
                r.SetQuantity(r.GetQuantity() - 1);
            }
            break;
        }
    }

    for (auto r : required_books_) {
        if (r.GetName() == book_to_require.GetName()) {
            r.SetQuantity(r.GetQuantity() + 1);
            break;
        }
    }

    if (!required_books_.contains(book_to_require)) {
        required_books_.insert(book_to_require);
    }

    ReloadAllBooks();
}

void Library::BookReturn(const Book& book_to_return){
    if (!required_books_.contains(book_to_return)) {
        std::cout << "Error: This book is not required" << std::endl;
        return;
    }

    for (auto r : available_books_) {
        if (r.GetName() == book_to_return.GetName()) {
            r.SetQuantity(r.GetQuantity() + 1);
            break;
        }
    }

    if (!available_books_.contains(book_to_return)) {
        available_books_.insert(book_to_return);
    }

    for (auto r : required_books_) {
        if (r.GetName() == book_to_return.GetName()) {
            r.SetQuantity(r.GetQuantity() - 1);
            break;
        }
    }

    ReloadAllBooks();
}

void Library::AddBook(const Book& book_to_add){

    for (auto a : all_books_) {
        if (book_to_add.GetName() == a.GetName()) {
            a.SetQuantity(a.GetQuantity() + book_to_add.GetQuantity());
            break;
        }
    }
    if (!all_books_.contains(book_to_add)) {
        all_books_.insert(book_to_add);
    }

    ReloadAllBooks();
}


void Library::PrintRequiredBooks(){
    for (auto r : required_books_) {
        r.PrintBook();
    }
}

void Library::PrintCostumersList(){
    for (auto c : costumers_){
        c.PrintCostumer();
    }
}

void Library::PrintBookList(){
    for (auto a : all_books_) {
        a.PrintBook();
    }
}

void Library::PrintAuthorList(){
    for (auto a : authors_) {
        a.PrintAuthor();
    }
}


std::vector<std::string> CommaSeparated(const std::string& initial_str, const std::string& delimiter){
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    std::string token;
    std::vector<std::string> res;

    while ((pos_end = initial_str.find (delimiter, pos_start)) != std::string::npos) {
        token = initial_str.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (initial_str.substr (pos_start));
    return res;
}