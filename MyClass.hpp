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


Point operator+(Point point){
	Point temp;
	temp._real = _real + point.real;
	temp._imag = _imag + point.imag;

	return temp;
}

Point operator-(Point point){
	Point temp;
	temp._real = _real - point.real;
	temp._imag = _imag - point.imag;

	return temp;
}

Point operator*(Point point) {
	Point temp;
	temp._real = _real * point.real;
	temp._imag = _imag * point.imag;

	return temp;
}

Point operator/(Point point){
	Point temp
	temp._real = _real / point.real;
	temp._imag = _imag / point.imag;
	
	return temp;
}

Point operator=(Point point){
	
	_real =  point.real;
	_imag =  point.imag;

	return *this;
}

bool operator!=(Point point){
	return((_real!=point.real)&&(_image!=point._real));
}


bool operator==(Point point){
	return((_real==point.real)&&(_image==point._real));
}










a
