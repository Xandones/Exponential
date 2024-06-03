#include <iostream>

int main()
{
	int exponent = 0;
	int exp = 0;
	int base = 1;
	int result = 1;

	std::cout << "Type the base to calculate exponentiation: ";
	std::cin >> base;
	std::cout << "Type the exponent to calculate exponentiation: ";
	std::cin >> exponent;

	exp = exponent;
	while (exp != 0)
	{
		result *= base;
		exp--;
	}

	std::cout << base << " to the power of " << exponent << " is " << result << "\n";

	system("PAUSE");
}