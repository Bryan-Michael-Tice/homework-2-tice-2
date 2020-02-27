all:main.o ComplexNumberClass.o
	g++ main.o ComplexNumberClass.o -o Test_Now
main.o: main.cpp MyClass.hpp
	g++ -c main.cpp
ComplexNumberClass.o: ComplexNumberClass.cpp MyClass.hpp
	g++ -c ComplexnumberClass.cpp
clean:
	rm *.o
	rm Test_Now
