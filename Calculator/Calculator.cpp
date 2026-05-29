#include "Calculator.hpp" 




bool Calculator::setOperator(std::string input)
{
	bool valid = (input == "+" || input == "-" || input == "*" || input == "/");
	if (valid) op = input;
	return valid;
}

float Calculator::calculate(float a, float b)
{
	if (op == "+")
	{
		return a + b;
	}
	if (op == "-")
	{
		return a - b;
	}
	if (op == "*")
	{
		return a * b;
	}
	if (op == "/")
	{
		return a / b;
	}
	return 0.0f;
}