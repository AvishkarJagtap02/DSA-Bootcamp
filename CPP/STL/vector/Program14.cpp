// operator[]

#include<iostream>
#include<vector>

int main() {
	std::vector<int> v(10);

	std::vector<int>::size_type sz = v.size();

	for(unsigned i = 0 ; i<sz; i++) {
		v[i] = i;
	}
	for(unsigned i = 0; i<sz/2; i++) {
		int temp = v[sz-1-i];
		v[sz-1-i] = v[i];
		v[i] = temp;
	}
	std::cout<<"vector contains: ";
	for(unsigned int i = 0; i<sz; i++) {
		std::cout<< ' ' << v[i];
	}
	std::cout<<  '\n';

	return 0;
}


