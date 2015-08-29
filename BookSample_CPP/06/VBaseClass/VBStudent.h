#ifndef  VBSTUDENT_H_INCLUDED
#define  VBSTUDENT_H_INCLUDED
#include  <iostream>
#include  <string>
#include  "VBPerson.h"
using  namespace  std;

// Person을 가상 기초 틀래스로 상속
class Student : virtual public Person {
    string school;
public:
    Student(const string n, const string s) : Person(n), school(s) {}
    void print() const {
        Person::print();
        cout << " goes to " << school << endl;
    }
};

#endif  // VBSTUDENT_H_INCLUDED
