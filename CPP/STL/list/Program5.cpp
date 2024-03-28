// assign() emplace_front(), enmplace_back(), insert() , resize(), swap(),remove() , sort() , reverse() ,merge();

#include<iostream> 
#include<list> 

int main() {
	std::list<int> lst(5,10);
	std::list<int> first;
	std::list<int> second;
	std::list<int> :: iterator it;

	first.assign(7,100);
	second.assign(first.begin(), first.end());
	lst.push_back(50);
	lst.push_front(5);
	lst.remove(5);
	lst.emplace_front(1);
	lst.emplace_back(100);
	std::cout<<"lst contains: "<<'\n';
	for(it = lst.begin(); it!= lst.end(); it++) {
		std::cout<< *it << ' ';
	}
	std::cout<<'\n';
	std::cout<<"1st list contains: "<<'\n';
	for(it = first.begin(); it!= first.end(); it++) {
		std::cout<< *it << ' ';
	}
	first.insert(it,2,121);
	std::cout<<'\n';
	std::cout<<"2nd list contains: "<<'\n';
	for(it = second.begin(); it!= second.end(); it++) {
		std::cout<< *it << ' ';
	}
	std::cout<<'\n';
	std::cout<<"1st list contains: "<<'\n';
	for(it = first.begin(); it!= first.end(); it++) {
		std::cout<< *it << ' ';
	}
	std::cout<<'\n';
	first.swap(second);
	std::cout<<lst.size()<<'\n';
	lst.clear();
	first.sort();
	first.reverse();

	first.merge(second);
	
	std::cout<<"2nd list contains: "<<'\n';
	for(it = second.begin(); it!= second.end(); it++) {
		std::cout<< *it << ' ';
	}
	std::cout<<'\n';
	std::cout<<"1st list contains: "<<'\n';
	for(it = first.begin(); it!= first.end(); it++) {
		std::cout<< *it << ' ';
	}
	std::cout<<'\n';

}
