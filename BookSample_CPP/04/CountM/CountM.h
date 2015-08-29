#ifndef  COUNTERM_H_INCLUDED   // Count.h가 중복 include 되지 않았는지 검사함
#define  COUNTERM_H_INCLUDED   // Count.h가 처음 include 될 때 정의됨

class  CounterM {            // 클래스 Counter의 선언 시작
    int  value;
public:
    CounterM(int mVal) {      // 생성자
        value = 0;
        maxValue = mVal + 1;  // 나머지 연산을 할 수 있도록 1을 더함
    }
    void  reset()             // 계수기의 값을 0으로 지움
    {  value = 0;  }
    void  count() {           // 계수기의 값을 1 증가시킴
        value = (value + 1) % maxValue;
    }
    int  getValue() const     // 계수기의 현재 값을 반환함
    {  return value;  }
};

#endif  // COUNT_H_INCLUDED
