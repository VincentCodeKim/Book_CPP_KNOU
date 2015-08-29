#include  <iostream>
#include  "Person.h"
#include  "Student.h"
using  namespace  std;

int  main()
{
    Person* p1 = new Person("Dudley");
    p1->print(); cout << endl;      // Person::print() 호출
    Person* p2 = new Student("Harry", "Hogwarts");
    p2->print(); cout << endl;      // Student::print() 호출
    ((Student *)p2)->print();  cout << endl;  // Student::print() 호출
    return 0;
}
