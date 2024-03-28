//Array max_size method example
#include<iostream>
#include<array>

int main() {
	std::array<int,6> myarray = { 10, 20, 30, 40, 50, 60 };
	std::cout<<"myarray size:"<< myarray.size() << std::endl;
	std::cout<<"max_size myarray:"<< myarray.max_size() << std::endl;

	return 0;
}
