#include  "MIParttime.h"

int  main()
{
	Parttime chulsoo("ABC high school", "DEF Entertainment");
	chulsoo.printSchool();		// student의 멤버함수 호출
	chulsoo.printCompany();	// employee의 멤버함수 호출

	return 0;
}
