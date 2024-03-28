//Array crbegin method example
#include<iostream>
#include<array>

int main() {
	std::array<int,6> myarray = { 10, 20, 30, 40, 50, 60 };
	std::cout<<"myarray contains:";
	for(auto i = myarray.crbegin(); i!= myarray.crend(); i++) {
		std::cout<<' '<< *i;
	}
	std::cout<<'\n';

	return 0;
}
