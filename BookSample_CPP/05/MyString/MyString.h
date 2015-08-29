#ifndef  MY_STRING_H_INCLUDED
#define  MY_STRING_H_INCLUDED
#include  <iostream>

class MyString  
{
    int    len;     // ���ڿ��� ����
    int    bufSize; // ���� ������ ���ڿ��� ����
    char*  buf;
public:
    MyString();                 // ������
    MyString(const char* str);  // ������
    MyString(const MyString& mstr);     // ���� ������
    virtual  ~MyString();           	// �Ҹ���
    int  length() const;            // ���ڿ� ���� ��ȯ �޼ҵ�
    // ���� ������
    const  MyString&  operator=(const MyString& mstr);
    // ���ڿ� ���� ������
    MyString  operator+(const MyString& mstr) const;
    MyString  operator+=(const MyString& mstr);
    bool  operator==(const MyString& mstr) const;   // ���迬���� ==
    bool  operator>(const MyString& mstr) const;    // ���迬���� >
    bool  operator<(const MyString& mstr) const;    // ���迬���� <
    char&  operator[](int i);
    const char&  operator[](int i) const;
    friend  std::ostream&  operator<<(std::ostream& os,
                                      const MyString& mstr);
};

// ��Ʈ�� ��� ������
inline std::ostream& operator<<(std::ostream& os, const MyString& mstr)
{
    os << mstr.buf;
    return os;
}
#endif // #ifndef	MY_STRING_H_INCLUDED
