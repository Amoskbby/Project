#include<iostream>
#include "Sales_item.h"

int main() {
	/*Sales_item item1, item2;
	std::cin >> item1 >> item2;

	if (item1.isbn() == item2.isbn()) {
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else {
		std::cerr << "Data must refer to same ISBN"
			<< std::endl;
		return -1;
	}*/

	std::cout << "The bool size is :" << sizeof(bool) << std::endl;;
	std::cout << "The short size is :" << sizeof(short) << std::endl;;
	std::cout << "The int size is :" << sizeof(int) << std::endl;;
	std::cout << "The long size is :" << sizeof(long) << std::endl;;
	std::cout << "The long long size is :" << sizeof(long long) << std::endl;;

	return 0;
}