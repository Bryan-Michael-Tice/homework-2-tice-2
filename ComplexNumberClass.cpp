#include <iostream>
#include "MyClass.hpp"

/* 
 * Place constructors and functions below
 *
 * /
 *
 *
 */

void ComplexAdd(double &number1, double &number2){

	(*double) imag=ImagNumberGetter(number1) +
		ImagNumberGetter(number2);
}

void ComplexSub(double &number1,double &number2){
	(*double) imag = ImagNumberGetter(number1)-ImagNumberGetter(number2);
}
void ComplexMulti( double &number1, double &number2){
	(*double) imag= ImageNumberGetter(number1)*ImageNumberGetter(number2);
}

void ComplexDiv(double &nubmber1,double &number2){
	(*double) imag=ImagNumberGetter(number1)/ImagNumberGetter(number2);
}


void CompexConj(double &number1, double &number2){
	(*double) imag=ImageNumberGetter(number1)*(-1)

}

void ComplexMag(double &number1){
	(*double) imag=(sqrt((pow(number1,2)));
}

void ComplexPhase(double &number1,&number2){

}
