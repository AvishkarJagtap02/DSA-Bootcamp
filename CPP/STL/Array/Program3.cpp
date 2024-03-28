//Array rbegin method example
#include<iostream>
#include<array>

int main() {
	std::array<int,5> myarray = { 5, 19, 77, 34, 99 };
	std::cout<<"myarray contains:";
	for(auto i = myarray.rbegin(); i!= myarray.rend(); i++) {
		std::cout<<' '<< *i;
	}
	std::cout<<'\n';

	return 0;
}
