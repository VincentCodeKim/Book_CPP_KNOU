#include  <iostream>
#include  "List.h"
using  namespace  std;

int main()
{
    List<int> iList;

    for (int i=10; i>0; i--)
        iList.insert(i);

    Node<int>* p = iList.getHead();
    while (p) {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;
    return 0;
}