#ifndef  VBPARTTIME_H_INCLUDED
#define  VBPARTTIME_H_INCLUDED
#include  "VBStudent.h"
#include  "VBEmployee.h"

// Student와 Employee를 상속
class Parttime : public Student, public Employee {
public:
    // Person의 생성자를 명시적으로 호출한다.
    Parttime(char *n, char *s, char *c)
        : Person(n), Student(n, s), Employee(n, c) {}
    void print() const {
        Student::print();
        Employee::print();
    }
};

#endif  // VBPARTTIME_H_INCLUDED
