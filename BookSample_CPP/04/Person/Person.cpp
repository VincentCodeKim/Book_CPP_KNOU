#include  <iostream>
#include  <cstring>
#include  "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr)   // ������
{
    this->name = new char[strlen(name)+1];   // �̸��� ������ ���� �Ҵ�
    strcpy(this->name, name);                // �����͸�� name�� �̸��� ����
    this->addr = new char[strlen(addr)+1];   // �ּҸ� ������ ���� �Ҵ�
    strcpy(this->addr, addr);                // �����͸�� addr�� �ּҸ� ����
    cout << "Person ��ü ������(" << name << ")" << endl;
}

Person::~Person()   // �Ҹ���
{
    cout << "Person ��ü ������(" << name << ")" << endl;
    delete [] name;                 // �̸� ������� �ݳ�
    delete [] addr;                 // �ּ� ������� �ݳ�
}

void  Person::print() const
{
    cout << addr << "�� ��� " << name << "�Դϴ�." << endl;
}

void  Person::chAddr(const char* newAddr)
{
    delete [] addr;                 // ���� ���� �ݳ�
    addr = new char[strlen(newAddr)+1];  // ���ο� �ּҿ� �´� ���� �Ҵ�
    strcpy(addr, newAddr);          // �����͸�� addr�� ���ο� �ּҸ� ����
}
