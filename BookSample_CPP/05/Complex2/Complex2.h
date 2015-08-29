#ifndef  COMPLEX2_H_INCLUDED
#define  COMPLEX2_H_INCLUDED
#include  <iostream>

class Complex2 {
    double  rPart, iPart;         // �Ǽ��� �� �����
public:
    // ������
    Complex2(double r=0, double i=0) : rPart(r), iPart(i) {}
    Complex2  conj()  const       // ���� ���Ҽ�
        {  return Complex2(rPart, -iPart);  }

    Complex2  operator+(const Complex2 &c) const;
    Complex2  operator+(double r) const;
    friend  Complex2  operator+(double r, const Complex2& c);

    Complex2  operator+=(const Complex2& c);
    Complex2  operator+=(double r);
    
    Complex2  operator-(const Complex2 &c) const;
    Complex2  operator-(double r) const;
    friend  Complex2  operator-(double r, const Complex2& c);

    Complex2  operator-=(const Complex2& c);
    Complex2  operator-=(double r);
    
    Complex2  operator*(const Complex2 &c) const;
    Complex2  operator*(double r) const;
    friend  Complex2  operator*(double r, const Complex2& c);

    Complex2  operator*=(const Complex2& c);
    Complex2  operator*=(double r);
    
    Complex2  operator/(const Complex2 &c) const;
    Complex2  operator/(double r) const;
    friend  Complex2  operator/(double r, const Complex2& c);

    Complex2  operator/=(const Complex2& c);
    Complex2  operator/=(double r);

    bool  operator==(const Complex2& c) const;
    bool  operator!=(const Complex2& c) const;

    friend	std::ostream& operator<<(std::ostream& os, const Complex2& c);

    void  display() const;        // ���Ҽ� ���� ���
};
#endif
