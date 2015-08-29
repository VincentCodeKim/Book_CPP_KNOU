#include  <iostream>
#include  <vector>
#include  <cstdlib>
#include  <ctime>
#include  <algorithm>
using  namespace  std;

int  main()
{
    srand((unsigned) time(NULL));   // ���� �߻��� �ʱ�ȭ
    vector<int>::iterator it;

    vector<int> iv1(5);
    for (it = iv1.begin() ; it < iv1.end() ; it++)
        *it = rand() % 100;         // 0~99�� ���� �߻�
    cout << "����1 �� ����� �� : ";
    for (it = iv1.begin() ; it < iv1.end() ; it++)
        cout << *it << " ";
    sort(iv1.begin(), iv1.end());   // ���� �˰���
    cout << endl << "���ĵ� ����1 �� ����� �� : ";
    for (it = iv1.begin() ; it < iv1.end() ; it++)
        cout << *it << " ";
    cout << endl << endl;

    vector<int> iv2(5);
    for (it = iv2.begin() ; it < iv2.end() ; it++)
        *it = rand() % 100;         // 0~99�� ���� �߻�
    cout << "����2 �� ����� �� : ";
    for (it = iv2.begin() ; it < iv2.end() ; it++)
        cout << *it << " ";
    sort(iv2.begin(), iv2.end());   // ���� �˰���
    cout << endl << "���ĵ� ����2 �� ����� �� : ";
    for (it = iv2.begin() ; it < iv2.end() ; it++)
        cout << *it << " ";
    cout << endl << endl;

    vector<int> iv3(iv1.size()+iv2.size()); // �պ� ����� ������ ����

    // iv1�� iv2�� �պ��� ����� iv3�� ����
    merge(iv1.begin(), iv1.end(), iv2.begin(), iv2.end(), iv3.begin());
    cout << "����1�� ����2�� �պ��� ��� : ";
    for (it = iv3.begin() ; it < iv3.end() ; it++)
        cout << *it << " ";
    cout << endl << endl;

    return 0;
}
