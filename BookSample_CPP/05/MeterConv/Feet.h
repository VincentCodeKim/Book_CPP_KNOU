#ifndef  FEET_H_INCLUDED
#define  FEET_H_INCLUDED
#include  <iostream>
#include  "Meter.h"
using  namespace  std;

class Feet {
    int  ft;        // ��Ʈ
    int  in;        // ��ġ
public:
    Feet() : ft(0), in(0) {}                // ������
    Feet(int f, int i) : ft(f), in(i) {}    // ������
    Feet(const Meter& m) {     // 1 �μ� ������ - �� ��ȯ
        // ���� ������ ��Ʈ ������ ��ȯ
        int	cmeter = m.getM() * 100 + m.getCm();
        // ��ġ�� ��ȯ�Ͽ� �ݿø�
        in = static_cast<int>(cmeter / 2.54 + 0.5);
        ft = in / 12;
        in %= 12;
    }
    void	display() const {
        if (ft)
            cout << ft << "ft ";
        if (in || !ft)
            cout << in << "in";
        cout << endl;
    }
};

#endif      // FEET_H_INCLUDED
