#include  <iostream>
#include  <fstream>
using namespace std;

int main()
{
    char filename[20];

    cout << "���ο� ���� �̸��� �Է��Ͻÿ� : ";
    cin >> filename;
    cin.ignore(1, '\n');    // �Է� ��Ʈ���� ����.
    // ���ο� ofstream ��ü�� �����Ͽ� ������ �����Ѵ�.
    ofstream fout(filename);
    char ch;
    while (cin.get(ch)) {   // cin.get(ch)�� false �� ������
	    fout << ch;         // �Էµ� ���ڸ� ���Ͽ� ����Ѵ�
    }
    fout.close();

    cout << "\n----------------- ������ ���� -----------------\n";

    // ���ο� ifstream ��ü�� �����Ͽ� ������ �����Ѵ�.
    ifstream fin(filename);
    while (fin.get(ch))     // ���Ͽ��� �� ���� ���ڸ� �о�
        cout << ch;         // ȭ�鿡 ����Ѵ�.
    fin.close();
    return 0;
}
