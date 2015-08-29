#include <iostream>
#include <cmath>
using namespace std;

const   double  PI = 3.141593;

struct  C2dType {   // 2���� ��ǥ ����ü
    double  x, y;
};

struct  CircleType {    // �� ����ü
    C2dType center;     // �߽� ��ǥ
    double  radius;     // �ݰ�
};

double  circleArea(CircleType c)
{
    return c.radius * c.radius * PI;
}

bool    chkOverlap(CircleType c1, CircleType c2)
{
    double  dx = c1.center.x - c2.center.x;
    double  dy = c1.center.y - c2.center.y;
    double  dCntr = sqrt(dx*dx + dy*dy);
    return dCntr < c1.radius + c2.radius;
}

void    dispCircle(CircleType c) {
    cout << "  �߽� : (" << c.center.x << ", " << c.center.y << ")";
    cout << "  �ݰ� : " << c.radius << endl;
}

int main()
{
    CircleType c1 = {{0, 0}, 10};   // �߽�(0,0), �ݰ�10���� �ʱ�ȭ
    CircleType c2 = {{30, 10}, 5};  // �߽�(30,10), �ݰ�5�� �ʱ�ȭ

    cout << "��1" << endl;
    dispCircle(c1);
    cout << "��2" << endl;
    dispCircle(c2);

    // �� ���� ��ø ���� ���
    if (chkOverlap(c1, c2))
        cout << "�� ���� ��ø�˴ϴ�." << endl;
    else
        cout << "�� ���� ��ø���� �ʽ��ϴ�." << endl;
    return 0;
}