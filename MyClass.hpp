#include <iostream>


class Complex{
	
	private:
	double _real;
	double _imag;

 void recopy(const double *ptr);
};

	public:
	
Complex();
Complex(double real, double imag){
	_real = real;
	_imag = imag; 
	}
Complex(const Complex &number){
	_real = number._real;
	_imag = number._imag;
}
	~Complex(){
}
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


