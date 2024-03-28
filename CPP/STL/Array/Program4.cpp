//Array rend method example
#include<iostream>
#include<array>

int main() {
	std::array<int,4> myarray = { 4, 26, 80, 14};
	std::cout<<"myarray contains:";
	for(auto i = myarray.rbegin(); i!= myarray.rend(); i++) {
		std::cout<<' '<< *i;
	}
	std::cout<<'\n';

	return 0;
}
