#include <iostream>
#include "include/Library.h"

int main() {
    Library my_library("../files/book.txt", "../files/costumer.txt");

    std::cout << "List of authors: " << std::endl;
    my_library.PrintAuthorList();
    std::cout << std::endl << std::endl;

    std::cout << "List of required books: " << std::endl;
    my_library.PrintRequiredBooks();
    std::cout << std::endl << std::endl;

    std::cout << "List of all books: " << std::endl;
    my_library.PrintBookList();
    std::cout << std::endl << std::endl;

    std::cout << "List of costumers: " << std::endl;
    my_library.PrintCostumersList();
    std::cout << std::endl << std::endl;

    my_library.BookRequiring(*my_library.GetAvailableBooks().begin());

    std::cout << "List of authors: " << std::endl;
    my_library.PrintAuthorList();
    std::cout << std::endl << std::endl;

    std::cout << "List of required books: " << std::endl;
    my_library.PrintRequiredBooks();
    std::cout << std::endl << std::endl;

    std::cout << "List of all books: " << std::endl;
    my_library.PrintBookList();
    std::cout << std::endl << std::endl;

    std::cout << "List of costumers: " << std::endl;
    my_library.PrintCostumersList();
    std::cout << std::endl << std::endl;

    return 0;
}
