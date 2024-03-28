// erase()
#include <iostream>
#include <list>

int main () {
  std::list<int> lst;
  std::list<int>::iterator it1,it2;
  for (int i=1; i<10; ++i)  {
	  lst.push_back(i*10);
  }
  it1 = it2 = lst.begin();
  advance (it2,6);           
  ++it1;                      

  it1 = lst.erase (it1);   
  it2 = lst.erase (it2);   
  ++it1;                      
  --it2;                         
  lst.erase (it1,it2);     
                              

  std::cout << "list contains:";
  for (it1=lst.begin(); it1!=lst.end(); ++it1) {
    std::cout << ' ' << *it1;
  }
  std::cout << '\n';
  return 0;
}
