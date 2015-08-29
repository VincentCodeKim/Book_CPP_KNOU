#include  <iostream>
#include  "IntArray2.h"
using  namespace  std;

int main()
{
    gArray arr(2000, 10);
    try {
        for (int i=2000 ; i <= 2010 ; i++)
            arr[i] = i;
        cout << arr << endl;
    }
    catch (gArray::LowIndex& e) {
        cout << "인덱스 하한 오류 --> " << e.wrongIndex << endl;
        cout << "인덱스 하한 : " << e.lowBound << endl;
    }
    catch (gArray::HighIndex& e) {
        cout << "인덱스 상한 오류 --> " << e.wrongIndex << endl;
        cout << "인덱스 상한 : " << e.highBound << endl;
    }
    return 0;
}
