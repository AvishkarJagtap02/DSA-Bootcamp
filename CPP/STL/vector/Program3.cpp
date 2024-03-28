// vector begin and end

#include<iostream>
#include<vector>

int main() {
	std::vector<int> myvector;
	for(int i=1; i<=5; i++) {
		myvector.push_back(i);
	}
	std::cout<<"myvector contains: ";
	std::vector<int>::iterator i;
	for(i = myvector.begin(); i!=myvector.end(); ++i) {
		std::cout<<' '<<*i;
	}
	std::cout<<'\n';

	return 0;
}
