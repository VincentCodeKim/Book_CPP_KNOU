#include <iostream>
using namespace std;

void PrString(const char* str, int tabLen=8);

int main()
{
	char* str = "a\tbcd\tabcdefghi\tabc";

	PrString(str);          // �� ���̸� 8�� �Ͽ� ���
	PrString(str, 4);       // �� ���̸� 4�� �Ͽ� ���

	return 0;
}

// �� ���̸� �����Ͽ� ���ڿ��� ����ϴ� �Լ�
// �μ�    const char* str : ����� ���ڿ�
//         int tabLen      : �� ����, ����Ʈ�� 8
// ��ȯ    ����.

void PrString(const char* str, int tabLen)
{
	int col=0;                  // �� ��ȣ
	while (*str) {              // ���ڿ��� ������ �ݺ�
		if (*str == '\t') {     // ����� ���ڰ� ���̸�
			// ���� �� ��ġ���� ���� ���ڸ� ä��.
			int n = (col / tabLen + 1) * tabLen;
			for (; col < n; col++)
				cout << ' ';
		}
		else {                  // ���� �ƴϸ� �� ���ڸ� ���
			cout << *str;
			col++;
		}
		str++;
	}
	cout << endl;
}