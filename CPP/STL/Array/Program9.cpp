//Returns a bool value indicating whether the array container is empty, i.e. whether its size is 0.

#include<iostream>
#include<array>

int main() {
	std::array<int,0> first;
	std::array<int,5> second;
	std::cout<<"first"<<(first.empty() ? "is empty" : " is not empty") << "\n";
	std::cout<<"second"<<(second.empty() ? "is empty" : " is not empty") << "\n";

	return 0;
}
