#include <iostream>
using namespace std;

struct SalesRec {
	char pID[10];
	int dYear, dMonth, dDate;
	char deliverAddr[40];
};

void PrSalesRec(const SalesRec& srec);

int main()
{
	SalesRec s = {"C25TV001", 2002, 11, 15, "����� ���α� ������"};

	PrSalesRec(s);
	return 0;
}

void PrSalesRec(const SalesRec& srec)  // srec�� ��� �μ�
{
	cout << "ǰ�� �ڵ� : " << srec.pID << endl;
	cout << "������� : " << srec.dYear << "�� ";
	cout << srec.dMonth << "�� ";
	cout << srec.dDate << "��" << endl;
	cout << "����ּ� : " << srec.deliverAddr << endl;
}