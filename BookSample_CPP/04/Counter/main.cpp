#include  <iostream>
#include  "Counter.h"
using  namespace  std;

int  main()
{
    Counter  cnt;
    cnt.reset();
    cout << "ī������ ���� �� : " << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "ī������ ���� �� : " << cnt.getValue() << endl;
    return 0;
}
