#include  <iostream>
#include  "Copycat.h"
using  namespace  std;

int main()
{
    Copycat  cc1("홍길동");
    Copycat  cc2(cc1);       // 복사 생성자 사용

    cc1.whoRU();
    cc2.whoRU();
    return 0;
}
