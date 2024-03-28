// capacity()
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v;

  for (int i=0; i<100; i++){
	  v.push_back(i);
  }
  
  std::cout << "size : "<< (int)v.size() <<"\n";
  std::cout << "capacity : "<< (int)v.capacity() <<"\n";
  std::cout << "max_size : "<< (int)v.max_size() <<"\n";
  return 0;
}
