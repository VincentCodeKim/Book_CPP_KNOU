#include  <iostream>
#include  "SwapFunc.h"
using  namespace  std;

int main()
{
    int x = 10, y = 20;
    cout << "x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "�� ��ȯ �� --> ";
    cout << "x = " << x << ", y = " << y << endl << endl;

    double p = 1.12, q = 2.43;
    cout << "p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "�� ��ȯ �� --> ";
    cout << "p = " << p << ", q = " << q << endl;

    return 0;
}
