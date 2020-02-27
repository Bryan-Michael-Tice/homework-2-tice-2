all: main.o Complex.o
	g++ main.o Complex.o -o Test_Now
main.o: main.cpp MyClass.hpp
	g++ -c main.cpp
Complex.o: ComplexNumberClass.cpp MyClass.hpp
	g++ -c ComplexNumberClass.cpp -o Complex.o
clean:
	rm *.o
	rm Test_Now
