//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#ifndef JIGSAW_AUTHOR_H
#define JIGSAW_AUTHOR_H

#include <string>

enum Gender{
    Male,
    Female,
    Other,
};

class Author {
private:
    std::string name;
    std::string last_name;
    Gender gender;
    std::string mail;
    int books = 0;

public:
    void SetFirstName(const std::string& first_name);
    void SetLastName(const std::string& last_name1);
    void SetGender(const Gender& Gender1);
    void SetMail(const std::string& Mail);
    void SetBooks(const int& Books);

    std::string GetFirstName();
    Gender GetGender();
    std::string GetLastName();
    std::string GetMail();
    int GetBooks();
};

#endif //JIGSAW_AUTHOR_H
