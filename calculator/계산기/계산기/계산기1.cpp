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
{//t를 반환받기로 했는데 a와 b가 double이므로 return을 double형태로 넣어야함 
	if (b == 0) {
		std::cout << "The divisor cannot be zero" << std::endl;
		return 0;
	}
	return a / b;
}


//애초에 탬플릿 안쓰고 더블로 함수 지정하기에는 ㅈint 연산이 있다. 
//메인함수는 템플릿이 될 수 없다. 그러므로 계산에 사용할 템플릿 변수의 타입을 한가지로 정해줘야 한다.
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
//곱하기 동작 이상
// break안넣으면 뒤에 케이스 실행됨
//더블로만 받을 수 있거나 int 로만 받을 수 있다 메인에 탬플릿 못쓰면 다른 방법들은 없을까
