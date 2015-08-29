#include	<iostream>
#include	"Complex2.h"

int  main()
{
    Complex2  a;
    double    b = 5.0;
    Complex2  c(1, 2);
    Complex2  d(2, -3);

    a += b;

    std::cout << a << " * " << d << " = ";		// 수식 출력
    a = a * d;
    std::cout << a << std::endl;				// 결과 출력

    std::cout << a << " / " << c << " = ";		// 수식 출력
    a = a / c;
    std::cout << a << std::endl;				// 결과 출력

    a = Complex2(10, 20);
    c = Complex2(5, -3);
    std::cout << a << " + " << c << " = " << a+c << std::endl;

    return 0;
}