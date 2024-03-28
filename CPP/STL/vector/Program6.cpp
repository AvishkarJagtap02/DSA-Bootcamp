// vector crbegin and crend

#include<iostream>
#include<vector>

int main() {
	std::vector<int> v = {10,20,30,40,50};
	std::vector<int> :: const_reverse_iterator i;
	std::cout<<"myvector contains: ";
	for(i = v.crbegin(); i!=v.crend(); ++i) {
		std::cout<<' '<<*i;
	}
	std::cout<<'\n';

	return 0;
}
