#include  <iostream>
#include  "Complex2.h"
using  namespace  std;

Complex2 Complex2::operator+(const Complex2 &c) const
{
    return Complex2(rPart+c.rPart, iPart+c.iPart);
}

Complex2  Complex2::operator+(double r) const
{
    return Complex2(rPart+r, iPart);
}

Complex2  operator+(double r, const Complex2& c)
{
    return Complex2(r+c.rPart, c.iPart);
}

Complex2  Complex2::operator+=(const Complex2& c)
{
    rPart += c.rPart;   iPart += c.iPart;
    return *this;
}

Complex2  Complex2::operator+=(double r)
{
    rPart += r;
    return *this;
}

Complex2  Complex2::operator-(const Complex2 &c) const
{
    return Complex2(rPart-c.rPart, iPart-c.iPart);
}

Complex2  Complex2::operator-(double r) const
{
    return Complex2(rPart-r, iPart);
}

Complex2  operator-(double r, const Complex2& c)
{
    return Complex2(r-c.rPart, -c.iPart);
}

Complex2  Complex2::operator-=(const Complex2& c)
{
    rPart -= c.rPart;   iPart -= c.iPart;
    return *this;
}

Complex2  Complex2::operator-=(double r)
{
    rPart -= r;
    return *this;
}

Complex2  Complex2::operator*(const Complex2 &c) const
{
    return Complex2(rPart*c.rPart - iPart*c.iPart,
                    rPart*c.iPart + iPart*c.rPart);
}

Complex2  Complex2::operator*(double r) const
{
    return Complex2(rPart*r, iPart*r);
}

Complex2  operator*(double r, const Complex2& c)
{
    return Complex2(r*c.rPart, r*c.iPart);
}

Complex2  Complex2::operator*=(const Complex2& c)
{
    double  t = rPart * c.rPart - iPart * c.iPart;
    iPart = rPart * c.iPart + iPart * c.rPart;
    rPart = t;
    return *this;
}

Complex2  Complex2::operator*=(double r)
{
    rPart *= r;
    iPart *= r;
    return *this;
}

Complex2  Complex2::operator/(const Complex2 &c) const
{
    double	d = c.rPart*c.rPart + c.iPart*c.iPart;
    return *this * c.conj() / d;
}

Complex2  Complex2::operator/(double r) const
{
    return Complex2(rPart/r, iPart/r);
}

Complex2  operator/(double r, const Complex2& c)
{
    double	d = c.rPart*c.rPart + c.iPart*c.iPart;
    return c.conj() * r / d;
}

Complex2  Complex2::operator/=(const Complex2& c)
{
    double	d = c.rPart*c.rPart + c.iPart*c.iPart;
    *this *= c.conj() / d;
    return *this;
}

Complex2  Complex2::operator/=(double r)
{
    rPart /= r;
    iPart /= r;
    return *this;
}

bool  Complex2::operator==(const Complex2& c) const
{
    return  rPart == c.rPart && iPart == c.iPart;
}

bool  Complex2::operator!=(const Complex2& c) const
{
    return  rPart != c.rPart || iPart != c.iPart;
}

ostream&  operator<<(ostream& os, const Complex2& c)
{
    os << "(" << c.rPart;      // 실수부 출력
    // 허수부 출력
    if (c.iPart > 0)
        os << "+j" << c.iPart;
    else if (c.iPart < 0)
        os << "-j" << -c.iPart;
    cout << ")";
    return os;
}


void  Complex2::display() const
{
    cout << "(" << rPart;
    if (iPart > 0)
        cout << "+j" << iPart;
    else if (iPart < 0)
        cout << "-j" << -iPart;
    cout << ")";
}
