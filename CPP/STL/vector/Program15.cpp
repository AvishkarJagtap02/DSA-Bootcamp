// at()
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v(10); 

  for (unsigned i=0; i<v.size(); i++) {
    v.at(i)=i;
  }

  std::cout << "vector contains:";
  for (unsigned i=0; i<v.size(); i++)
    std::cout << ' ' << v.at(i);
  std::cout << '\n';

  return 0;
}
