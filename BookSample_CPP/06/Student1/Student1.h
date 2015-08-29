#ifndef  STUDENT1_H_INCLUDED
#define  STUDENT1_H_INCLUDED
#include  <string>
#include  "Person1.h"

// �Ļ� Ŭ���� student�� person�� ��ӹ޾� �����Ѵ�.
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
