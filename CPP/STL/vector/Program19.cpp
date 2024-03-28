//push_back()
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v;
  int x;

  std::cout << "Please enter some integers : \n";

  do {
    std::cin >> x;
    v.push_back (x);
  } while (x);

  std::cout << "vector stores " << int(v.size()) << " numbers.\n";

  return 0;
}
