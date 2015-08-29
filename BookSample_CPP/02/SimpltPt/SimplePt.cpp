#include <iostream>
using namespace std;

int main()
{
    int  a = 10;
    int* ptr;

    ptr = &a;	// ptr에 a의 주소를 넣는다.
    cout << "ptr이 가리키는 값 : " << *ptr << endl;
    *ptr = 20;
    cout << "변수 a의 값 : " << a << endl;
    return 0;
}
