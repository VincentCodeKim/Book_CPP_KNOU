#include  <iostream>
#include  "Person.h"
#include  "Student.h"
using  namespace  std;

int  main()
{
    Person* p1 = new Person("Dudley");
    p1->print(); cout << endl;      // Person::print() ȣ��
    Person* p2 = new Student("Harry", "Hogwarts");
    p2->print(); cout << endl;      // Student::print() ȣ��
    ((Student *)p2)->print();  cout << endl;  // Student::print() ȣ��
    return 0;
}
