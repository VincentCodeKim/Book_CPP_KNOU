#ifndef  INTARRAY1_H_INCLUDED
#define  INTARRAY1_H_INCLUDED
#include  <iostream>
using  namespace  std;

const int DefaultSize = 10;
class Array {
    int* pType;
    int	 size;
public:
    Array(int s = DefaultSize);
    virtual ~Array() { delete pType; }
    // operator
    int& operator[](int offset);
    // accessor
    int getsize() const { return size; }
    // friend function
    friend ostream& operator<<(ostream&, Array&);
    // exception class
    class BadIndex {};
};

#endif  // INTARRAY1_H_INCLUDED
