//emplace
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v = {10,20,30};

  auto it = v.emplace ( v.begin()+1, 100 );
  v.emplace ( it, 200 );
  v.emplace ( v.end(), 300 );

  std::cout << "vector contains:";
  for (auto& x: v) {
    std::cout << ' ' << x;
  }
  std::cout << '\n';
  return 0;
}
