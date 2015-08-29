#include  <iostream>
#include  "List.h"
#include  "MyString.h"
using  namespace  std;

int  main()
{
    List<MyString> strList;
    strList.insert("amzing?");
    strList.insert("Isn't this");
    Node<MyString>* p = strList.getHead();
    while (p) {
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl;

    return 0;
}
