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
/*
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
*/
double Complex::magnitude(){
	return sqrt((_real*_real)+(_imag*_imag));
}

double Complex::phase(){
	double My_Phase= atan(_imag/_real)*(180/M_PI);
        return My_Phase;
}
Complex Complex::operator+(Complex){
	Complex temp;
	temp._real = _real + _real;
	temp._imag = _imag + _imag;

	return temp;
}

Complex Complex::operator-(Complex){
	Complex temp;
	temp._real = _real - _real;
	temp._imag = _imag - _imag;

	return temp;
}

Complex Complex::operator*(Complex C1) {
	Complex temp;
	temp._real = _real * C1._real;
	temp._imag = _imag * C1._imag;

	return temp;
}

Complex Complex::operator/(Complex C1){
	
	Complex temp;
	temp._real = _real / C1._real;
	temp._imag = _imag / C1._imag;
	
	return temp;
}

Complex Complex::operator=(Complex C1){
	
	_real = C1. _real;
	_imag = C1. _imag;

	return *this;
}

/* bool operator!=(Complex val){
	return((_real!=val.real)&&(_image!=val._real));
}


bool operator==(Complex val){
	return((_real==val.real)&&(_image==val._real));
}*/
std::ostream &operator<<(std::ostream &out,const Complex &c1){
	if(c1._imag<0){
		double temp =-1 * c1._imag;
		out<<c1._real<< "  -  " <<temp<<"i";
	}
	else{
		out<<c1._real<<"+"<<c1._imag<<"i";
	}
	return out;
} 
std::istream &operator>>(std::istream &in,Complex &Data){
	in>>Data._real>>Data._imag;
	return in;
}







