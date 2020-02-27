#include <iostream>


class Complex{
	
	private:
	double _real;
	double _imag;
       
//	void reccopy(const double *ptr);


	public:
		Complex();
		Complex(double real);
		Complex(double real, double imag);
		Complex(const Complex);
		~Complex();
		
		double RealNumGetter() const;
		double ImagNumGetter() const;
		
		void print();
		Complex add(Complex);
		Complex sub(Complex);
		Complex mult(Complex);
		Complex  div(Complex);
	//	void conj(Complex c);
		double magnitude();
		double phase();

		Complex operator+(Complex);
		Complex operator-(Complex);		
		Complex operator*(Complex);
		Complex operator/(Complex);
		Complex operator=(Complex);

 friend std::ostream& operator<<(std::ostream &out, const Complex);
 
 friend std::istream& operator>>(std::istream &in, Complex );
 };


