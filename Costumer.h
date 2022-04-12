//
// Created by Rafael Simão Borges Anunciada on 12/04/2022.
//

#ifndef JIGSAW_COSTUMER_H
#define JIGSAW_COSTUMER_H

#include <string>
#include <set>

class Costumer {
private:
    std::string firstName;
    std::string lastName;
    std::set<Books>
public:
    Costumer(std::string firstName, std::string lastName);

    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);

    std::string getFirstName();
    std::string getLastName();
};


#endif //JIGSAW_COSTUMER_H
