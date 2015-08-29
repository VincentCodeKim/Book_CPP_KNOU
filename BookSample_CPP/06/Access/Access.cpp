#include  <iostream>
using  namespace  std;

class BaseC {
    int a;  // private member
protected:
    int b;  // protected member
public:
    int c;  // public member
    int geta() { return a; } // private ����� ������ Ŭ�����̹Ƿ� ok
    int set(int x, int y, int z) { a=x; b=y; c=z; } // ok
};

class Drvd1 : public BaseC {
    // class BaseC�� ������� a�� class Drvd1�� �׼����� �� ����.
    // class BaseC�� ������� b�� class Drvd1�� protected�� ��޵ǰ�
    // class BaseC�� ������� c�� class Drvd1�� public���� ��޵ȴ�.
    // b�� c�� �� Ŭ������ �׼����� �� �ִ�.
public:
    int sum() { return a+b+c; } // a�� ����ϱ� ������ error
    void printbc() { cout << b << ' ' << c << '\n'; }  // ok
};

class Drvd2 : protected BaseC {
    // class BaseC�� ������� a�� class Drvd2�� �׼����� �� ����.
    // class BaseC�� ������� b�� c�� class Drvd2�� protected�� ��޵ȴ�.
    // b�� c�� class Drvd2�� �׼����� �� �ִ�.
public:
    int sum() { return a+b+c; } // a�� ����ϱ� ������ error
    void printbc() { cout << b << ' ' << c << '\n'; }  // ok
};

class Drvd3 : private BaseC {
    // class BaseC�� ������� a�� class Drvd3�� �׼����� �� ����.
    // class BaseC�� ������� b�� c�� Drv3�� private���� ��޵ȴ�.
    // b�� c�� class Drvd3�� �׼��� �� �� �ִ�.
public:
    int sum() { return a+b+c; } // a�� ����ϱ� ������ error
    void printbc() { cout << b << ' ' << c << '\n'; }  // ok
};

int  main()  // �ܺ� �Լ�
{
    Drvd1   d1;
    d1.a = 1;    // private ����� �׼����ϹǷ� error
    d1.b = 2;    // protected ����� �׼����ϹǷ� error
    d1.c = 3;    // public ����� �׼����ϹǷ� OK
    Drvd2   d2;
    d2.a = 1;    // private ����� �׼����ϹǷ� error
    d2.b = 2;    // protected�� ��޵Ǵ� ����� �׼����ϹǷ� error
    d2.c = 3;    // protected�� ��޵Ǵ� ����� �׼����ϹǷ� error
    Drvd3   d3;
    d3.a = 1;    // private ����� �׼����ϹǷ� error
    d3.b = 2;    // private���� ��޵Ǵ� ����� �׼����ϹǷ� error
    d3.c = 3;    // private���� ��޵Ǵ� ����� �׼����ϹǷ� error
    return 0;
}
