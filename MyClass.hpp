//MyClass.hpp
#include <iostream>

class Complex{
    private:
 	double _real;
	double _imag;
    public:
		Complex();
		Complex(double real);
		Complex(double real, double imag);
		Complex(const Complex &value);
		~Complex();
		
		double RealNumGetter() const;
		double ImagNumGetter() const;
		
		void print();
		Complex add(Complex);
		Complex sub(Complex);
		Complex mult(Complex);
		Complex  div(Complex);
		Complex conj();
		double magnitude();
		double phase();
	

		Complex operator+(Complex value);
		Complex operator-(Complex value);		
		Complex operator*(Complex value);
		Complex operator/(Complex value);
		Complex operator=(Complex value);

 friend std::ostream& operator<<(std::ostream &out, const Complex &C1);
 
 friend std::istream& operator>>(std::istream &in, Complex &C1);
 };


