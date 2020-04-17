#include <iostream>
using namespace std;

class Complex
{
double re;
double im;
public:
Complex(double r = 0, double i = 0) { re = r; im = i; }
Complex(const Complex& c)
{
re = c.re;
im = c.im;
}
double& Re() { return re; }
double& Im() { return im; }
Complex operator +(const Complex& c)const
{
return Complex(re + c.re, im + c.im);
}
Complex operator -(const Complex& c)const
{
return Complex(re - c.re, im - c.im);
}
friend ostream& operator « (ostream& o, const Complex& c)
{
return o « '(' « c.re « ";" « c.im « ')';
}
};
int main()
{
Complex c(1, 2), b(1), a = c - b;
cout « a « endl;
return 0;
}

