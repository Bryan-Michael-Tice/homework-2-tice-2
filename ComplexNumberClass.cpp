#include <iostream>
#include <math.h>
#include "MyClass.hpp"

/* 
 * Place constructors and functions below
 *
 * /
 *
 *
 */

Complex Complex::add(double &number1, double &number2){
	Complex c = {c1.real+c2.real, c1.imag+c2.imag};
	return c;
}

Complex Complex::sub(Complex c1, Complex c2){
	Complex c = {c1.real-c2.real, c1.imag-c2.imag};
	return c;
}
Complex Complex::mult(Complex c1, Complex c2){
	Complex c = {(c1.real*c2.real)+(c1.imag*c2.imag*-1),(c1.imag*imag*c2.real)+(c1.real*c2.imag)};
	return c;
}

Complex Complex::div(Complex c1, Complex c2){
	double denominator = ComplexMulti(c2)*ComplexMulti(c2);
	Complex c = ComplexMult(c1,ComplexConj(c2));

	while(denominator !=0){
	c.real /= denominator;
	c.imag /= denominator;
	return c;	
	}
}


Complex Complex::conj(Complex c){
	if(*c.imag<0){
		std::cout<< " " <<c.real<<"  " << -c.imag;
		std::cout<<endl;
	else {	
		std::cout<< " " <<c.real<<"  " << -c.imag;
		std::cout<<endl;
	}
}

double Complex::mag(const Complex c){
	return sqrt((c.real*c.real)+(c.imag*c.imag));
}

double Complex::phase(const Complex c){
	double phase= atan(c.imag/c.real)
	phase = phase (180/M_PI);
	return (phase<0) ? -ph : ph;

}
