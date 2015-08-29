#include  <iostream>
#include  "IntArray1.h"
using	namespace	std;

int main()
{
    Array arr(10);
    try {
        for (int i=0 ; i <= 10; i++)
            arr[i] = i;
    }
    catch (Array::BadIndex e) {
        cout << "인덱스 범위 오류" << endl;
    }
    cout << arr << endl;
    return 0;
}
