#include <iostream>
#include <cmath>
using namespace std;

const   double  PI = 3.141593;

struct  C2dType {   // 2���� ��ǥ ����ü
    double  x, y;
};

class   CircleClass {   // �� Ŭ����
    C2dType center;     // �߽� ��ǥ
    double  radius;     // �ݰ�
public:
    // �߽� (cx, cy), �ݰ� r�� ���� �ʱ�ȭ
    void    initCircle(double cx, double cy, double r) {
        center.x = cx;
        center.y = cy;
        radius = r;
    }
    // ���� ���� ���
    double  circleArea() const {
        return radius * radius * PI;
    }
    bool chkOverlap(const CircleClass& c) const {
        double  dx = center.x - c.center.x;
        double  dy = center.y - c.center.y;
        double  dCntr = sqrt(dx*dx + dy*dy);
        return dCntr < radius + c.radius;
    }
    // �� ��ü�� ���� ���÷���
    void    display() const {
        cout << "  �߽� : (" << center.x << ", " << center.y << ")";
        cout << "  �ݰ� : " << radius << endl;
    }
};

int main()
{
    CircleClass	c1, c2;
    c1.initCircle(0, 0, 10);	// �߽�(0,0), �ݰ�10���� �ʱ�ȭ
    c2.initCircle(30, 10, 5);	// �߽�(30,10), �ݰ�5�� �ʱ�ȭ

    cout << "��1" << endl;
    c1.display();
    cout << "��2" << endl;
    c2.display();

    // �� ���� ��ø ���� ���
    if (c1.chkOverlap(c2))
        cout << "�� ���� ��ø�˴ϴ�." << endl;
    else
        cout << "�� ���� ��ø���� �ʽ��ϴ�." << endl;
    return 0;
}