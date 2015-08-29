#ifndef  COUNTERM_H_INCLUDED   // Count.h�� �ߺ� include ���� �ʾҴ��� �˻���
#define  COUNTERM_H_INCLUDED   // Count.h�� ó�� include �� �� ���ǵ�

class  CounterM {            // Ŭ���� Counter�� ���� ����
    int  value;
public:
    CounterM(int mVal) {      // ������
        value = 0;
        maxValue = mVal + 1;  // ������ ������ �� �� �ֵ��� 1�� ����
    }
    void  reset()             // ������� ���� 0���� ����
    {  value = 0;  }
    void  count() {           // ������� ���� 1 ������Ŵ
        value = (value + 1) % maxValue;
    }
    int  getValue() const     // ������� ���� ���� ��ȯ��
    {  return value;  }
};

#endif  // COUNT_H_INCLUDED
