#include <iostream>
#include <math.h>
#include "MyClass.hpp"


Complex::Complex(){
		_real=0;
		_imag=0;
		}

Complex::Complex(double real){
	_real =  real;
	_imag = 0;
}
Complex::Complex(double real, double imag){
		_real = real;
		_imag = imag;
	}	

Complex::~Complex(){
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

double Complex::magnitude(const Complex c){
	return sqrt((c.real*c.real)+(c.imag*c.imag));
}

double Complex::phase(const Complex c){
	double phase= atan(c.imag/c.real)
	phase = phase (180/M_PI);
	return (phase<0) ? -ph : ph;
}
Complex Complex::operator+(Complex val){
	Complex temp;
	temp._real = _real + val.real;
	temp._imag = _imag + val.imag;

	return temp;
}

Complex Complex::operator-(Complex val){
	Complex temp;
	temp._real = _real - val.real;
	temp._imag = _imag - val.imag;

	return temp;
}

Complex Complex::operator*(Complex val) {
	Complex temp;
	temp._real = _real * val.real;
	temp._imag = _imag * val.imag;

	return temp;
}

Complex Complex::operator/(Complex val){
	Complex temp
	temp._real = _real / val.real;
	temp._imag = _imag / val.imag;
	
	return temp;
}

Complex Complex::operator=(Complex val){
	
	_real =  val.real;
	_imag =  val.imag;

	return *this;
}

bool operator!=(Complex val){
	return((_real!=val.real)&&(_image!=val._real));
}


bool operator==(Complex val){
	return((_real==val.real)&&(_image==val._real));
}
std::ostream &operator<<(std::ostream &out,Complex &c1){
	if(c1.imag()<0){
		double temp =-1 * c1.imag();
		out<<c1.real()<< "  -  " <<temp<<"i";
	}
	else{
		out<<c1.real()<<"+"<<c1.imag()<<"i";
	}
	return out;
}
std::istream &operator>>(std::istream &in,Complex &Data){
	in>>Data._real>>Data.imag;
	return in;
}







