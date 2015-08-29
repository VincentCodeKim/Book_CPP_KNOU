#ifndef  SAFEINTARAY_H_INCLUDED
#define  SAFEINTARAY_H_INCLUDED
#include  <iostream>
#include  "SafeIntArray.h"

class  SafeIntArray {
    int	limit;      // 원소의 개수
    int	*arr;       // 데이터 저장 공간
public:
    SafeIntArray(int nOfEl) : limit(nOfEl)
    {	arr = new int[nOfEl];	}	// 저장공간 할당
    ~SafeIntArray()
    {	delete [] arr;	}
    int&	operator[](int i)
    {
        if (i < 0 || i >= limit) {
            std::cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
            exit(1);
        }
        return arr[i];  // i번째 원소의 참조 반환
    }
};
#endif
