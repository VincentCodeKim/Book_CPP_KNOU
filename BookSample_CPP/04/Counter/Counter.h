#ifndef  COUNT_H_INCLUDED   // Count.h�� �ߺ� include ���� �ʾҴ��� �˻���
#define  COUNT_H_INCLUDED   // Count.h�� ó�� include �� �� ���ǵ�

class  Counter {            // Ŭ���� Counter�� ���� ����
    int  value;
public:
    void  reset()
        {  value = 0;  }
    void  count()
        {  ++value;  }
    int  getValue() const
        {  return value;  }
};

#endif  // COUNT_H_INCLUDED
