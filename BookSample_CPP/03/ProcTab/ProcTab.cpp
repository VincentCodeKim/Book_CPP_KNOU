#include <iostream>
using namespace std;

void PrString(const char* str, int tabLen=8);

int main()
{
	char* str = "a\tbcd\tabcdefghi\tabc";

	PrString(str);          // 탭 길이를 8로 하여 출력
	PrString(str, 4);       // 탭 길이를 4로 하여 출력

	return 0;
}

// 탭 길이를 조절하여 문자열을 출력하는 함수
// 인수    const char* str : 출력할 문자열
//         int tabLen      : 탭 길이, 디폴트는 8
// 반환    없음.

void PrString(const char* str, int tabLen)
{
	int col=0;                  // 열 번호
	while (*str) {              // 문자열의 끝까지 반복
		if (*str == '\t') {     // 출력할 문자가 탭이면
			// 다음 탭 위치까지 공백 문자를 채움.
			int n = (col / tabLen + 1) * tabLen;
			for (; col < n; col++)
				cout << ' ';
		}
		else {                  // 탭이 아니면 그 문자를 출력
			cout << *str;
			col++;
		}
		str++;
	}
	cout << endl;
}