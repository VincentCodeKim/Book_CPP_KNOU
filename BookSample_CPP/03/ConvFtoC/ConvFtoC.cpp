#include<iostream>
using namespace std;

int main()
{
	float FahrToC(float fahr);      //�Լ� ����
	float fTemp, cTemp;

	cout << "ȭ�� �µ� : ";
	cin >> fTemp;
	cTemp = FahrToC(fTemp);         //�Լ� ȣ��
	cout << "---> ���� �µ� : " << cTemp << endl;
	return 0;
}

// ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� �Լ�
// �μ�    float fahr : ȭ�� �µ�
// ��ȯ    ���� �µ�
float FahrToC(float fahr)
{
	float c = (fahr-32) * 5 / 9;
	return c;
}
