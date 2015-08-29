#include  <iostream>
using  namespace  std;

class BaseC {
    int a;  // private member
protected:
    int b;  // protected member
public:
    int c;  // public member
    int geta() { return a; } // private 멤버를 선언한 클래스이므로 ok
    int set(int x, int y, int z) { a=x; b=y; c=z; } // ok
};

class Drvd1 : public BaseC {
    // class BaseC의 멤버변수 a는 class Drvd1이 액세스할 수 없다.
    // class BaseC의 멤버변수 b는 class Drvd1의 protected로 취급되고
    // class BaseC의 멤버변수 c는 class Drvd1의 public으로 취급된다.
    // b와 c는 이 클래스가 액세스할 수 있다.
public:
    int sum() { return a+b+c; } // a를 사용하기 때문에 error
    void printbc() { cout << b << ' ' << c << '\n'; }  // ok
};

class Drvd2 : protected BaseC {
    // class BaseC의 멤버변수 a는 class Drvd2가 액세스할 수 없다.
    // class BaseC의 멤버변수 b와 c는 class Drvd2의 protected로 취급된다.
    // b와 c는 class Drvd2가 액세스할 수 있다.
public:
    int sum() { return a+b+c; } // a를 사용하기 때문에 error
    void printbc() { cout << b << ' ' << c << '\n'; }  // ok
};

class Drvd3 : private BaseC {
    // class BaseC의 멤버변수 a는 class Drvd3가 액세스할 수 없다.
    // class BaseC의 멤버변수 b와 c는 Drv3의 private으로 취급된다.
    // b와 c는 class Drvd3가 액세스 할 수 있다.
public:
    int sum() { return a+b+c; } // a를 사용하기 때문에 error
    void printbc() { cout << b << ' ' << c << '\n'; }  // ok
};

int  main()  // 외부 함수
{
    Drvd1   d1;
    d1.a = 1;    // private 멤버를 액세스하므로 error
    d1.b = 2;    // protected 멤버를 액세스하므로 error
    d1.c = 3;    // public 멤버를 액세스하므로 OK
    Drvd2   d2;
    d2.a = 1;    // private 멤버를 액세스하므로 error
    d2.b = 2;    // protected로 취급되는 멤버를 액세스하므로 error
    d2.c = 3;    // protected로 취급되는 멤버를 액세스하므로 error
    Drvd3   d3;
    d3.a = 1;    // private 멤버를 액세스하므로 error
    d3.b = 2;    // private으로 취급되는 멤버를 액세스하므로 error
    d3.c = 3;    // private으로 취급되는 멤버를 액세스하므로 error
    return 0;
}
