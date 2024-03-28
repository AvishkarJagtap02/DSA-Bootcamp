// data()
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v (5);

  int* p = v.data();

  *p = 10;
  ++p;
  *p = 20;
  p[2] = 100;

  std::cout << "vector contains:";
  for (unsigned i=0; i<v.size(); ++i) {
    std::cout << ' ' << v[i];
  }
  std::cout << '\n';
  return 0;
}
