// front() and back()
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v;

  v.push_back(78);
  v.push_back(16);


  v.front() -= v.back();

  std::cout << "v.front() is now " << v.front() << '\n';

  return 0;
}
