// splice()
#include <iostream>
#include <list>

int main () {
  std::list<int> l1, l2;
  std::list<int>::iterator it;

  for (int i=1; i<=5; ++i) {
     l1.push_back(i);   
  }

  for (int i=1; i<=6; ++i) {
     l2.push_back(i*10);  
  }

  it = l1.begin();
  ++it;                        

  l1.splice (it, l2); 


  std::cout << "list1 contains:";
  for (it=l1.begin(); it!=l1.end(); ++it) {
    std::cout << ' ' << *it;
  }
  std::cout << '\n';
}


                                          
