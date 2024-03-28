//Array end method example
#include<iostream>
#include<array>

int main() {
	std::array<int,5> myarray = { 5, 19, 77, 34, 99 };
	std::cout<<"myarray contains:";
	for(auto i = myarray.begin(); i!= myarray.end(); i++) {
		std::cout<<' '<< *i;
	}
	std::cout<<'\n';

	return 0;
}
