#include  <iostream>
#include  "Meter.h"
#include  "Feet.h"
using  namespace  std;

int  main()
{
    Meter   mLen(10, 50);
    Feet    fLen = mLen;
    mLen.display();
    fLen.display();

    return 0;
}
