// clearing vectors
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v;
  v.push_back (100);
  v.push_back (200);
  v.push_back (300);

  std::cout << "vector contains:";
  for (unsigned i=0; i<v.size(); i++)
    std::cout << ' ' << v[i];
  std::cout << '\n';

  v.clear();
  v.push_back (1101);
  v.push_back (2202);

  std::cout << "vector contains:";
  for (unsigned i=0; i<v.size(); i++) {
    std::cout << ' ' <<v[i];
  }
  std::cout << '\n';
  return 0;
}
