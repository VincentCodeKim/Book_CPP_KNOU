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
        cout << "�ε��� ���� ���� --> " << e.wrongIndex << endl;
        cout << "�ε��� ���� : " << e.lowBound << endl;
    }
    catch (gArray::HighIndex& e) {
        cout << "�ε��� ���� ���� --> " << e.wrongIndex << endl;
        cout << "�ε��� ���� : " << e.highBound << endl;
    }
    return 0;
}
