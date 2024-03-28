// begin() , end() , push_back() , push_front();

#include<iostream> 
#include<list> 

int main() {
	std::list<int> lst(5,10);
	std::list<int> :: iterator it;

	lst.push_back(50);
	lst.push_front(5);

	for(it = lst.begin(); it!= lst.end(); it++) {
		std::cout<< *it << std::endl;
	}
}
