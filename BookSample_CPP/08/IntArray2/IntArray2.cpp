#include  <iostream>
#include  "IntArray2.h"
using	namespace	std;

int& gArray::operator[](int offset)
{
    if (offset<base)
        throw LowIndex(offset, base);		// 예외 클래스 생성
    if (offset >= (base+size))
        throw HighIndex(offset, base+size-1); 	// 예외 클래스 생성
    return pType[offset - base];
}

ostream& operator<<(ostream& os, gArray& garr)
{
    int s = garr.getsize();
    int b = garr.getbase();
    for (int i=b; i<b+s; i++) {
        if (i%5 == 0)
            os << endl;
        os << "[" << i << "] = " << garr[i] << "   ";
    }
    return os;
}
