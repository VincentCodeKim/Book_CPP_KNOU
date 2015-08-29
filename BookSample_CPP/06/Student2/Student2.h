#ifndef  STUDENT2_H_INCLUDED
#define  STUDENT2_H_INCLUDED
#include  <iostream>
#include  <string>
#include  "Person2.h"

// �Ļ� Ŭ���� student�� person�� ��ӹ޾� �����Ѵ�.
class Student : public Person {
    std::string school;
public:
    Student(const std::string n, const std::string s) : Person(n) {
        std::cout << "Student�� ������" << std::endl;
        school = s;
    }
    virtual ~Student() {
        std::cout << "Student�� �Ҹ���" << std::endl;
    }
    const std::string getSchool() const { return school; }
    void print() const {
        Person::print();
        std::cout << " goes to " << school;
    }
};

#endif  // STUDENT2_H_INCLUDED
