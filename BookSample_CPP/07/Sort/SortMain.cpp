#include  <iostream>
#include  "SortFunc.h"
using  namespace  std;

int main()
{
    int i;

    int x[10] = { 0, 6, 4, 3, 1, 9, 5, 7, 2, 8 };
    sort(x, 10);
    for (i=0; i<10; i++)
        cout << x[i] << " ";
    cout << endl;
    return 0;
}
