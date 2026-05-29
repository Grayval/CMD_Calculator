#pragma once
#include <iostream>
#include <string>


class Calculator 
{
public:
	Calculator() {}

	bool setOperator(std::string op);
	float calculate(float a, float b);
private:
	std::string op;
};