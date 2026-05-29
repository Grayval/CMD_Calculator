#include "Calculator.hpp"




int main()
{
	Calculator calc;
	std::string op;
	
	std::cout << "Welchen Operator willst du verwenden?\n";
	std::cin >> op;
	calc.setOperator(op);

	std::cout << "\nNenn mir deine zwei Nummern.\n";

	float a, b;
	std::cin >> a >> b;
	std::cout << "\nDas Ergebnis ist: " << calc.calculate(a, b) << std::endl;
}