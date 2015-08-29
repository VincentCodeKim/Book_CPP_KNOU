#include  <iostream>
#include  "Pencils.h"
#include  "SortFunc.h"
using  namespace  std;

int main(int argc, char* argv[])
{
    Pencils pBoxes[5];
    pBoxes[0] = 45;     // 3타 9자루
    pBoxes[1] = 8;      // 8자로
    pBoxes[2] = 21;     // 1타 9자루
    pBoxes[3] = 35;     // 2타 11자루
    pBoxes[4] = 18;     // 1타 6자루

    sort(pBoxes, 5);	

    for (int i=0 ; i < 5 ; i++)
        cout << pBoxes[i] << endl;
    return 0;
}
