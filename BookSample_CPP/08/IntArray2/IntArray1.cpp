#include  <iostream>
#include  <cstring>
#include  "IntArray1.h"
using	namespace	std;

Array::Array(int s) : size(s)   // �⺻ ������ ����
{
    pType = new int[s];
    memset(pType, 0, sizeof(int)*s);
}

int& Array::operator[](int offset)
{
    if (offset<0 || offset >= size) // �������� �˻�
        throw BadIndex(offset);           // ����ó�� ���� �� ����
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
