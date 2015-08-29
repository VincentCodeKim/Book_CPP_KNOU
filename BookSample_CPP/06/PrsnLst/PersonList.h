#ifndef  PERSONLIST_H_INCLUDED
#define  PERSONLIST_H_INCLUDED

#include  "Person.h"

class PersonList {
    Person*      pPerson;
    PersonList*  next;
public:
    PersonList(Person* p, PersonList* pPl=NULL) : pPerson(p), next(pPl) {}
    virtual ~PersonList() {  delete next;  }

    PersonList*  addFront(Person* pPrsn) {
        PersonList* pt = new PersonList(pPrsn, this);
        return pt;
    }
    
    Person*  getPerson() const {  return pPerson;  }

    PersonList* getNext() const {  return next;  }
};

#endif  // PERSONLIST_H_INCLUDED
