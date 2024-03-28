//vector size();

#include<iostream>
#include<vector>

int main() {
	std::vector<int> v;
	std::cout<<"0.size: "<<v.size() << '\n';

	for(int i=0; i<10; i++) {
		v.push_back(i);
	}
	std::cout<<"1.size: "<<v.size() << '\n';

	v.insert(v.end(),10,100);
	std::cout<<"2.size: "<<v.size() << '\n';

	v.pop_back();
	std::cout<<"3.size: "<<v.size() << '\n';

	return 0;
}

