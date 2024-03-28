// empty()
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v;
  int sum (0);
  for (int i=1; i<=10; i++){
	  v.push_back(i);
  }

  while(!v.empty()) {
	  sum += v.back();
	  v.pop_back();
  }
  
  std::cout << "total : "<< sum <<"\n";
  return 0;
}
