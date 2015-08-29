#include<iostream>
using namespace std;

int main()
{
	float FahrToC(float fahr);      //함수 원형
	float fTemp, cTemp;

	cout << "화씨 온도 : ";
	cin >> fTemp;
	cTemp = FahrToC(fTemp);         //함수 호출
	cout << "---> 섭씨 온도 : " << cTemp << endl;
	return 0;
}

// 화씨 온도를 섭씨 온도로 변환하는 함수
// 인수    float fahr : 화씨 온도
// 반환    섭씨 온도
float FahrToC(float fahr)
{
	float c = (fahr-32) * 5 / 9;
	return c;
}
