#include  "MIParttime.h"

int  main()
{
	Parttime chulsoo("ABC Univ.", "DEF Co.");
	chulsoo.printSchool();      // student의 멤버함수 호출
	chulsoo.printCompany();     // employee의 멤버함수 호출

	return 0;
}
