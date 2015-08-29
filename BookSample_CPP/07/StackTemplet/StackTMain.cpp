#include  <iostream>
#include  "Stack2.h"
using  namespace  std;

int main()
{
    Stack<char> sc(100);	// char 스택 선언
    Stack<int> si(50);		// int 스택 선언

    sc.push('a');		// char 스택 사용
    sc.push('b');
    cout << "CHAR STACK: " << sc.pop();
    cout << sc.pop() << endl;
    si.push(5);			// int 스택 사용
    si.push(10);
    cout << "INT STACK: " << si.pop() << " ";
    cout << si.pop() << endl;
    return 0;
}
