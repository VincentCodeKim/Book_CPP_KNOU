#ifndef  PERSON2_H_INCLUDED
#define  PERSON2_H_INCLUDED
#include  <iostream>
#include  <string>

class Person {
    std::string name;
public:
    Person (const std::string n) {
        std::cout << "Person�� ������" << std::endl;
        name = n;
    }
    virtual ~Person() {
        std::cout << "Person�� �Ҹ���" << std::endl;
    }
    const std::string getName() const { return name; }
    void print() const { std::cout << name; }
};

#endif  // PERSON2_H_INCLUDED
