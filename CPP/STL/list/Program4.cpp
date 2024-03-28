// front() back() 
#include <iostream>
#include <list>

int main () {
  std::list<int> lst;

  lst.push_back(777);
  lst.push_back(221);

  lst.front() -= lst.back();
  std::cout << "lst.front() is now " << lst.front() << '\n';
  std::cout << "lst.back() is now " << lst.back() << '\n';
  return 0;
}
