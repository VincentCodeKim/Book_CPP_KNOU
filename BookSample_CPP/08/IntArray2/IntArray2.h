#ifndef  INTARRAY2_H_INCLUDED
#define  INTARRAY2_H_INCLUDED

#include  "IntArray1.h"

class  gArray : public Array {
    int	base;
public:
    gArray(int b, int s) : base(b), Array(s) {}
    int& operator[](int offset);
    // accessor
    int getbase() const { return base; }
    friend ostream& operator<<(ostream&, gArray&);
    // exception class
    class LowIndex : public Array::BadIndex {
    public:
        int lowBound;
        LowIndex(int n, int l) : BadIndex(n), lowBound(l) {}
    };
    class HighIndex : public Array::BadIndex {
    public:
        int highBound;
        HighIndex(int n, int h) : BadIndex(n), highBound(h) {}
    };
};

#endif  // INTARRAY2_H_INCLUDED
