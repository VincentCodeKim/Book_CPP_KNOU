#include  <iostream>
#include  "Person.h"
#include  "Student.h"
#include  "PersonList.h"
using  namespace  std;

int  main()
{
    Person   dudley("Dudley");
    Student  harry("Harry", "Hogwarts");
    Student  ron("Ron", "Hogwarts");

    dudley.print();     cout << endl;
    harry.print();      cout << endl << endl;

    PersonList* plHead = new PersonList(&ron);
    plHead = plHead->addFront(&harry);
    plHead = plHead->addFront(&dudley);

    PersonList* pt=plHead;
    while (pt != NULL) {
        pt->getPerson()->print();
        cout << endl;
        pt = pt->getNext();
    }
    delete plHead;

    return 0;
}
