#include  <iostream>
#include  <vector>
using  namespace  std;

int  main()
{
    vector<int> intVec(5);
    for (int i=0 ; i < intVec.size() ; i++)
        intVec[i] = i+1;
    vector<int>::iterator it;
    cout << "����� ������ : ";
    for (it = intVec.begin() ; it < intVec.end() ; it++)
        cout << *it << " ";
    cout << endl;

    it = intVec.begin();
    cout << "3��° ������ : ";
    cout << *(it+2) << endl;

    return 0;
}
