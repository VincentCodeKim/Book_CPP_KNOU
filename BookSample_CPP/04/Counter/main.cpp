#include  <iostream>
#include  "Counter.h"
using  namespace  std;

int  main()
{
    Counter  cnt;
    cnt.reset();
    cout << "카운터의 현재 값 : " << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "카운터의 현재 값 : " << cnt.getValue() << endl;
    return 0;
}
