//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#ifndef JIGSAW_AUTHOR_H
#define JIGSAW_AUTHOR_H

#include <string>
#include <iostream>

enum Gender{
    Male,
    Female,
    Other,
};

class Author {
public:
    //Constructor
    Author();
    Author(const std::string& first_name, const std::string& last_name, const Gender& gender, const std::string& mail);

    //Getter
    [[nodiscard]] std::string GetFirstName() const;
    [[nodiscard]] Gender GetGender() const;
    [[nodiscard]] std::string GetLastName() const;
    [[nodiscard]] std::string GetMail() const;
    [[nodiscard]] int GetBooks() const;

    //Setter
    void SetFirstName(const std::string& first_name);
    void SetLastName(const std::string& last_name);
    void SetGender(const Gender& gender);
    void SetMail(const std::string& mail);
    void SetBooks(const int& books);

    //Operators
    bool operator<(const Author& author) const;

    //Methods
    void PrintAuthor();

private:
    std::string first_name_;
    std::string last_name_;
    Gender gender_;
    std::string mail_;
    int books_ = 0;
};

#endif //JIGSAW_AUTHOR_H
