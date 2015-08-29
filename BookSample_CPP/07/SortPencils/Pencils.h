#ifndef  PENCILS_H_INCLUDED
#define  PENCILS_H_INCLUDED
#include  <iostream>

class  Pencils {
    int  dozens;        // Ÿ
    int  np;            // ����
public:
    Pencils() : dozens(0), np(0) {};
    Pencils(int n)
        {  dozens = n / 12;   np = n % 12;  }
    Pencils(int d, int n) : dozens(d), np(n) {}
    Pencils	 operator++();
    Pencils  operator++(int);
    bool  operator>(const Pencils& p) const
        {  return dozens*12+np > p.dozens*12+p.np;  }
    void  display()  const;
    friend  std::ostream&  operator<<(std::ostream& os,
                                      const Pencils& p);
};

inline std::ostream& operator<<(std::ostream& os, const Pencils& p)
{
    if (p.dozens) {
        os << p.dozens << "Ÿ ";
        if (p.np)  os << p.np << "�ڷ�";
    }
    else
        os << p.np << "�ڷ�";
    return os;
}

#endif
