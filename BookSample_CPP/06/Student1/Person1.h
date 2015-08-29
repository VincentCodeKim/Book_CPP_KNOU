#ifndef  PERSON1_H_INCLUDED
#define  PERSON1_H_INCLUDED
#include  <string>

class Person {
    std::string name;
public:
    void setName(std::string n) { name = n; }
    const std::string getName() const { return name; }
    void print() const { std::cout << name; }
};

#endif  // PERSON1_H_INCLUDED
