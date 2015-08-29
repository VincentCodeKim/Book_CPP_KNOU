#ifndef  STACK2_H_INCLUDED
#define  STACK2_H_INCLUDED
#include  <iostream>
using  namespace  std;

template  <class T>
class  Stack {
    T* buf;     // buffer pointer
    int top;    // stack top
    int size;   // ������ ũ��
public:
    Stack(int s) : size(s), top(s)   // ������
        {  buf = new T[s];  }
    virtual ~Stack()                 // �Ҹ���
        {  delete [] buf;  }
    void push(T a);
    T pop();
};

template <class T> void Stack<T>::push(T a)
{
    if (top)
        buf[--top] = a;
    else
        cout << "Erorr -- stack full\n";
}

template <class T> T Stack<T>::pop()
{
    if (top < size)
        return buf[top++];
    else {
        cout << "Error -- stack empty\n";
        return NULL;
    }
}

#endif  // STACK2_H_INCLUDED
