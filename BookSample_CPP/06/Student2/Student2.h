#ifndef  STUDENT2_H_INCLUDED
#define  STUDENT2_H_INCLUDED
#include  <iostream>
#include  <string>
#include  "Person2.h"

// 파생 클래스 student를 person을 상속받아 정의한다.
class Student : public Person {
    std::string school;
public:
    Student(const std::string n, const std::string s) : Person(n) {
        std::cout << "Student의 생성자" << std::endl;
        school = s;
    }
    virtual ~Student() {
        std::cout << "Student의 소멸자" << std::endl;
    }
    const std::string getSchool() const { return school; }
    void print() const {
        Person::print();
        std::cout << " goes to " << school;
    }
};

#endif  // STUDENT2_H_INCLUDED
