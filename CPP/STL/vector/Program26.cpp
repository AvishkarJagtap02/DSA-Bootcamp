//emplace_back()
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v = {10,20,30};

  v.emplace_back (100);
  v.emplace_back (200);

  std::cout << "vector contains:";
  for (auto& x: v) {
    std::cout << ' ' << x;
  }
  std::cout << '\n';
  return 0;
}
