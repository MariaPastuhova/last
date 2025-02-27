#include <iostream>

extern int Sum(int a, int b);
extern int Mult(int a, int b);

int main()
{
	int a = 5;
	int b = 8;

	int c = Sum(5, 4);
	int d = Mult(2, 7);

<<<<<<< HEAD
	std::cout << " " << c;
=======
	std::cout << c;

	std::cout << "\n" << d;
>>>>>>> feature-utils
}