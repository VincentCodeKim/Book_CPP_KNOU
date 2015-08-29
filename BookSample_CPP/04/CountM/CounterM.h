#ifndef  COUNTERM_H_INCLUDED   // Count.h가 중복 include 되지 않았는지 검사함
#define  COUNTERM_H_INCLUDED   // Count.h가 처음 include 될 때 정의됨

class  CounterM {            // 클래스 Counter의 선언 시작
    const int  maxValue;     // 계수기의 최대값
    int  value;              // private 데이터 멤버  
public:
    CounterM(int mVal) : maxValue(mVal+1), value(0) { }   // 생성자
    void  reset()             // 계수기의 값을 0으로 지움
    {  value = 0;  }
    void  count() {           // 계수기의 값을 1 증가시킴
        value = (value + 1) % maxValue;
    }
    int  getValue() const     // 계수기의 현재 값을 반환함
    {  return value;  }
};

#endif  // COUNT_H_INCLUDED
