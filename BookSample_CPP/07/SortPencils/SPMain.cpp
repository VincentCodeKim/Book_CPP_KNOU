#include  <iostream>
#include  "Pencils.h"
#include  "SortFunc.h"
using  namespace  std;

int main(int argc, char* argv[])
{
    Pencils pBoxes[5];
    pBoxes[0] = 45;     // 3Ÿ 9�ڷ�
    pBoxes[1] = 8;      // 8�ڷ�
    pBoxes[2] = 21;     // 1Ÿ 9�ڷ�
    pBoxes[3] = 35;     // 2Ÿ 11�ڷ�
    pBoxes[4] = 18;     // 1Ÿ 6�ڷ�

    sort(pBoxes, 5);	

    for (int i=0 ; i < 5 ; i++)
        cout << pBoxes[i] << endl;
    return 0;
}
