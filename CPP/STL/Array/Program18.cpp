//tuple element
#include<iostream>
#include<tuple>

int main() {
	auto mytuple = std::make_tuple(10,'a');

	std::tuple_element<0,decltype(mytuple)>::type first = std::get<0>(mytuple);
	std::tuple_element<1,decltype(mytuple)>::type second = std::get<1>(mytuple);

	std::cout<< "mytuple contains: " << first << " and " << second << '\n';
	return 0;
}

