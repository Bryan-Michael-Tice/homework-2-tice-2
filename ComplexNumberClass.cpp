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

Complex::Complex(){
	_real = new double;
	_imag = new double;
}

Complex::Complex(double real, double imag){
	_real = new double;
	_imag = new double;
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
