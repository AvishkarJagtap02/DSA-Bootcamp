// rbegin() , rend()

#include<iostream> 
#include<list> 

int main() {
	std::list<int> lst = {10,20,30,40,50};
	std::list<int> :: reverse_iterator it;

	for(it = lst.rbegin(); it!= lst.rend(); it++) {
		std::cout<< *it << std::endl;
	}
}
