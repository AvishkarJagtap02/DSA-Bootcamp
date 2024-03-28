// vector rbegin and rend

#include<iostream>
#include<vector>

int main() {
	std::vector<int> v = {10,20,30,40,50};
	std::vector<int> :: reverse_iterator i;
	std::cout<<"myvector contains: ";
	for(i = v.rbegin(); i!=v.rend(); ++i) {
		std::cout<<' '<<*i;
	}
	std::cout<<'\n';

	return 0;
}
