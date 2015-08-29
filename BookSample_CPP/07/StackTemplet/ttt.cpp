#include  "Stack2.h"

void f(Stack<int>& st, int n) {
    st.push(n);
    Stack<long> st1(10);
    st1.push(1000);
    st1.push(2000);
    cout << st1.pop() << endl;
    cout << st1.pop() << endl;
}
