// crbegin() , crend()

#include<iostream> 
#include<list> 

int main() {
	std::list<int> lst = {10,20,30,40,50};
	std::list<int> :: const_reverse_iterator it;

	for(it = lst.crbegin(); it!= lst.crend(); it++) {
		std::cout<< *it << std::endl;
	}
}
