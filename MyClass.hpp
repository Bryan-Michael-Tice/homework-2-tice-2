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
		
		void ComplexAdd(Complex c1, Complex c2);
		void ComplexSub(Complex c1, Complex c2);
		void ComplexMulti(Complex c1, Complex c2);
		void ComplexDiv(Complex c1, Complex c2);
		void CompexConj(Complex c);
		void ComplexMag(Complex c);
		void ComplexPhase(Complex c);

 friend std::ostream &operator<<(std::iostream & out, Complex &complex_int);
 
 friend std::istream &operator>>(std::istream & out, Complex &complex_int);
 };
