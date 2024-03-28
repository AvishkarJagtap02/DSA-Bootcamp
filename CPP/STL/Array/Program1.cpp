//Array begin method example
#include<iostream>
#include<array>

int main() {
	std::array<int,5> myarray = {2,16,77,34,50};
	std::cout<<"myarray contains:";
	for(auto i = myarray.begin(); i!= myarray.end(); i++) {
		std::cout<<' '<< *i;
	}
	std::cout<<'\n';

	return 0;
}
