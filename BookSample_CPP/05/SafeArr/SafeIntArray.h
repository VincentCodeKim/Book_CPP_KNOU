#ifndef  SAFEINTARAY_H_INCLUDED
#define  SAFEINTARAY_H_INCLUDED
#include  <iostream>
#include  "SafeIntArray.h"

class  SafeIntArray {
    int	limit;      // ������ ����
    int	*arr;       // ������ ���� ����
public:
    SafeIntArray(int nOfEl) : limit(nOfEl)
    {	arr = new int[nOfEl];	}	// ������� �Ҵ�
    ~SafeIntArray()
    {	delete [] arr;	}
    int&	operator[](int i)
    {
        if (i < 0 || i >= limit) {
            std::cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
            exit(1);
        }
        return arr[i];  // i��° ������ ���� ��ȯ
    }
};
#endif
