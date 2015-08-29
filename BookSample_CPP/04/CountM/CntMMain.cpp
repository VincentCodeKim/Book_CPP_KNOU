#include  <iostream>
#include  "CounterM.h"
using  namespace  std;

int  main()
{
    CounterM  cnt(9);

    for (int i=0 ; i < 20 ; i++) {
        cnt.count();
        cout << cnt.getValue() << "  " ;
    }
    cout << endl;
    return 0;
}
