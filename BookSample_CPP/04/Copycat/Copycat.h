#ifndef  COPYCAT_H_INCLUDED
#define  COPYCAT_H_INCLUDED

#include  <iostream>
#include  <cstring>
using  namespace  std;

class Copycat {
    char*  name;
public:
    Copycat(const char* n) {
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }
    Copycat(const Copycat& cc) {
        name = new char[strlen(cc.name)+1];
        strcpy(name, cc.name);
    }
    virtual  ~Copycat() {
        delete [] name;
    }
    void whoRU() const {
        cout << "나는 " << name << "입니다." << endl;
    }
};
#endif
