#ifndef  STUDENT1_H_INCLUDED
#define  STUDENT1_H_INCLUDED
#include  <string>
#include  "Person1.h"

// 파생 클래스 student를 person을 상속받아 정의한다.
class Student : public Person {
    std::string school;
public:
    void setSchool(std::string s) { school = s; }
    const std::string getSchool() const { return school; }
    void print() const {
        Person::print();
        std::cout << " goes to " << school;
    }
};

#endif  // STUDENT1_H_INCLUDED
