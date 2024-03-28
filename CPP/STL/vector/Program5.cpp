// vector cbegin and cend

#include<iostream>
#include<vector>

int main() {
	std::vector<int> v = {10,20,30,40,50};
	std::vector<int> :: const_iterator i;
	std::cout<<"myvector contains: ";
	for(i = v.cbegin(); i!=v.cend(); ++i) {
		std::cout<<' '<<*i;
	}
	std::cout<<'\n';

	return 0;
}
