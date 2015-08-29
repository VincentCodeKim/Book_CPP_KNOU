#include  <iostream>
#include  <cstring>
#include  "IntArray1.h"
using	namespace	std;

Array::Array(int s) : size(s)   // 기본 생성자 구현
{
    pType = new int[s];
    memset(pType, 0, sizeof(int)*s);
}

int& Array::operator[](int offset)
{
    if (offset<0 || offset >= size) // 예외조건 검사
        throw BadIndex(offset);           // 예외처리 생성 및 전달
    return pType[offset];
}

ostream& operator<<(ostream& os, Array& arr)
{
    for (int i=0 ; i < arr.getsize() ; i++) {
        if (i % 5 == 0)
            os << endl;
        os << "[" << i << "] = " << arr[i] << "   ";
    }
    return os;
}
