// tuple size

#include<iostream>
#include<tuple>

int main() {
	std::tuple<int,char,double> mytuple(10,'a',3.14);

	std::cout<< "mytuple has ";
	std::cout<< std::tuple_size<decltype(mytuple)>::value;
	std::cout<< " elements "<<'\n';

	return 0;
}
