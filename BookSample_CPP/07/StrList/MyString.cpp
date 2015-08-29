#include  <iostream>
#include  <cstring>
#include  "MyString.h"
using  namespace  std;

MyString::MyString() : len(0), bufSize(0)     // 생성자
{
    buf = new char[len+1];
    buf[0] = '\0';
}

MyString::MyString(const char* str) // 생성자
{
    len = bufSize = strlen(str);    // 문자열 길이
    buf = new char[len+1];          // 문자열 저장공간 할당
    strcpy(buf, str);               // 문자열 복사
}

MyString::MyString(const MyString& mstr)    // 복사 생성자
: len(mstr.len), bufSize(mstr.len)
{
    buf = new char[len+1];
    strcpy(buf, mstr.buf);
}

MyString::~MyString()		    // 소멸자
{ 
    delete [] buf;
}

int  MyString::length() const       // 문자열 길이 반환 메소드
{
    return len;
}

// 대입 연산자
const  MyString&  MyString::operator=(const MyString& mstr)
{
    if (bufSize < mstr.len) {   // 문자열 공간이 필요량보다 작으면
        delete [] buf;          // 기존 공간 반환
        len = bufSize = mstr.len;   // 새로운 문자열의 길이
        buf = new char[len+1];      // 새로운 공간 할당
    }
    else                        // 그렇지 않으면
        len = mstr.len;         // 문자열의 길이만 수정
    strcpy(buf, mstr.buf);
    return *this;
}

// 문자열 연결 연산자
MyString  MyString::operator+(const MyString& mstr) const
{
    char* tStr = new char[len + mstr.len + 1];
    strcpy(tStr, buf);
    strcpy(tStr+len, mstr.buf);
    MyString tmStr(tStr);
    delete [] tStr;
    return tmStr;
}

MyString  MyString::operator+=(const MyString& mstr)
{
    if (bufSize < len + mstr.len) {
        bufSize = len += mstr.len;
        char*  tbuf = new char[len+1];
        strcpy(tbuf, buf);
        delete [] buf;
        buf = tbuf;
    }
    strcat(buf, mstr.buf);
    return *this;
}

bool  MyString::operator==(const MyString& mstr) const	// 관계연산자 ==
{
    return !strcmp(buf, mstr.buf);
}

bool  MyString::operator>(const MyString& mstr) const   // 관계연산자 >
{
    return strcmp(buf, mstr.buf) > 0;
}

bool  MyString::operator<(const MyString& mstr) const   // 관계연산자 <
{
    return strcmp(buf, mstr.buf) < 0;
}

char&  MyString::operator[](int i)
{
    return buf[i];
}
