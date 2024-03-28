// erase()
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v;
  for (int i=1; i<=10; i++)  {
	  v.push_back(i);
  }
  v.erase (v.begin()+5);
  v.erase (v.begin(),v.begin()+3);

  std::cout << "vector contains:";
  for (unsigned i=0; i<v.size(); i++) {
    std::cout << ' ' << v[i];
  }
  std::cout << '\n';
  return 0;
}
