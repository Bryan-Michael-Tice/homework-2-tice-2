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
		_real=0;
		_imag=0;
		}


Complex::Complex(double real, double imag){
		_real = real;
		_imag = imag;
	}
	
Complex::Complex(double real, double imag){
		_real = value.real:
		_image = value.imag;
	}	

Complex::~Complex(const Complex &value){
	}

double Complex::real() const{
	return _real;
}


double Complex::imag() const{
	return _imag;

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









