#include <iostream>

extern int Sum(int a, int b);

int main()
{
	int a = 5;
	int b = 8;

	int c = Sum(5, 4);

	std::cout << " " << c;
}