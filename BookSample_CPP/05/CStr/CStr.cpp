#include  <iostream>
#include  <cstring>
using  namespace  std;

int  main()
{
    char   str1[40] = "C style string";     // char �迭 �ʱ�ȭ
    char   str2[] = "Object-Oriented ";     // �迭 ũ��=���ڿ� ����
    char*  str3 = "Programming";            // char ������

    cout << str1 << endl;                   // ���ڿ� ���
    cout << str2 << "�� ���ڿ� ���̴� ";
    cout << strlen(str2) << endl;           // strlen() : ���ڿ� ����
    strcpy(str1, str2);                     // strcpy() : ���ڿ� ����
    cout << str1 << endl;
    strcat(str1, str3);                     // strcat() : ���ڿ� ����
    cout << str1 << endl;
    return 0;
}
