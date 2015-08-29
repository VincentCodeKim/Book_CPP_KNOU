#include  <iostream>
#include  "Stack2.h"
using  namespace  std;

template <class T> Stack<T>::Stack(int s)
{
    buf = new T[size = top = s];
}

template <class T> Stack<T>::~Stack()
{
    delete[] buf; 
}

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
