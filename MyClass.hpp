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
double real() const;
double imag() const;

void print();

void ComplexAdd(double &number1, double &number2)
	double result;
	result =imag(number1) + image(number2);
	result=(*double) imag;
	return;
}
/*
 *
 *Below:
 class declaration, constructor declarations and function declaratons..

needs:

these data members,

double real
double imag

these prototypes,

Default constructor (no args)
Default constructor (w/args)
Copy constructor
A getter function to get the real number
A getter function to get the imaginary number
A function to print
A function to add two complex numbers
A function to multiply two complex numbers
A function to divide tow complex numbers
A function to get the magnitude of a complex number
A function go get the phase (angle) of a complex nubmer
 
 
 and to overload these operators (as prototypes)
 +
 -
 *
 *
 (/) 
=
<<
>>


create a make file to compile it for somoothnesss

 *
 * /
