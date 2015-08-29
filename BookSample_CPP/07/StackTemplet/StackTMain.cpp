#include  <iostream>
#include  "Stack2.h"
using  namespace  std;

int main()
{
    Stack<char> sc(100);	// char ���� ����
    Stack<int> si(50);		// int ���� ����

    sc.push('a');		// char ���� ���
    sc.push('b');
    cout << "CHAR STACK: " << sc.pop();
    cout << sc.pop() << endl;
    si.push(5);			// int ���� ���
    si.push(10);
    cout << "INT STACK: " << si.pop() << " ";
    cout << si.pop() << endl;
    return 0;
}
