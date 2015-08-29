#ifndef  COUNT_H_INCLUDED   // Count.h가 중복 include 되지 않았는지 검사함
#define  COUNT_H_INCLUDED   // Count.h가 처음 include 될 때 정의됨

class  Counter {            // 클래스 Counter의 선언 시작
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
