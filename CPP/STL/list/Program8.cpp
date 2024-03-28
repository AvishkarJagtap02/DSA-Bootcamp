
//remove_if() , unique();

#include <iostream>
#include <list>
bool single_digit (const int& value) { 
	return (value<10); 
}
int main () {
  int myints[]= {15,36,7,17,20,39,4,1,17};
  std::list<int> mylist (myints,myints+8);   

  mylist.remove_if (single_digit);          
         

  std::list<int> :: iterator it;
  std::cout << "mylist contains:";
  for (it=mylist.begin(); it!=mylist.end(); ++it) {
    std::cout << ' ' << *it;
  }
  std::cout << '\n';
  mylist.unique();
  std::cout << "mylist contains:";
  for (it=mylist.begin(); it!=mylist.end(); ++it) {
    std::cout << ' ' << *it;
  }
  std::cout << '\n';
  return 0;
}
