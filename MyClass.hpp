#include <iostream>


class Complex{
	
	private:
	double _real;
	double _imag;
       
	void reccopy(const double *ptr);


	public:
		Complex();
		Complex(double real, double imag);
		Complex(const Complex &number);
		~Complex();
		
		double RealNumGetter() const;
		double ImagNumGetter() const;
		
		void print();
		void add(Complex c1, Complex c2);
		void sub(Complex c1, Complex c2);
		void mult(Complex c1, Complex c2);
		void div(Complex c1, Complex c2);
		void conj(Complex c);
		void magnitude(Complex c);
		void phase(Complex c);

		Complex operator+(Complex);
		Complex operator-(Complex);		
		Complex operator*(Complex);
		Complex operator/(Complex);
		Complex operator=(Complex);

 friend std::ostream &operator<<(std::iostream & out, Complex &complex_int);
 
 friend std::istream &operator>>(std::istream & out, Complex &complex_int);
 };


