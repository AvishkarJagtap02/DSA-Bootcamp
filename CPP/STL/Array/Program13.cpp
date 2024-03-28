//Data method 

#include<iostream>
#include<cstring>
#include<array>

int main() {
	const char* cstr = "Test String";
	std::array<char,12> charray;

	std::memcpy (charray.data(), cstr , 12);
	std::cout << charray.data()  << '\n';
	return 0;
}
