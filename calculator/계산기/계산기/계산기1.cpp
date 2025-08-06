#include<iostream>

template<typename T>
T add(T a, T b)
{
	return a + b;
}

template<typename T>
T minus(T a, T b)
{
	return a - b;
}

template<typename T>
T multiple(T a, T b)
{
	return a * b;
}

template<typename T>
T division(T a, T b)
{
	if (b == 0) {
		std::cout << "The divisor cannot be zero" << std::endl;
		return 0;
	}
	return a / b;
}



int main()
{
	double a;
	double b;

	std::cout << "Please enter the first number to calculate" << std::endl;
	std::cin >> a;
	std::cout << "Please enter the second number to calculate" << std::endl;
	std::cin >> b;
	char operation;

	std::cout << "Please enter the desired operation among +, -, *, /." << std::endl;
	std::cin >> operation;
	double result;
	switch (operation)
	{
	case'+':result = add(a, b);
		break;
	case'-':result = minus(a, b);
		break;
	case'*':result = multiple(a, b);
		break;
	case '/':result = division(a, b);
		break;

	}
	std::cout << a << operation << b << "=" << result;
	return 0;
}

