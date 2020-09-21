#include<iostream>

int main() {
	// Á·Ï°1.9
	int val = 50;
	int sum = 0;
	while (val <= 100) {
		sum += val;
		val++;
	}

	std::cout << "C 1.9: sum is :" << sum << std::endl;

	//Á·Ï°1.10
	int val2 = 10;
	while (val2 >= 0) {
		std::cout << "int type is :" << val2 << std::endl;
		--val2;
	}

	//Á·Ï°1.11
	std::cout << "Please input two number:";
	int number1 = 0;
	int number2 = 0;
	std::cin >> number1 >> number2;
	while (number1 >= number2) {
		std::cout << "range has " << number2 << std::endl;
		++number2;
	}

	while (number1 <= number2) {
		std::cout << "range has " << number1 << std::endl;
		++number1;
	}

	return 0;
}