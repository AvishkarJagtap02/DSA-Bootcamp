// resize()
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> v;

  for (int i=0; i<10; i++){
	  v.push_back(i);
  }
  v.resize(5);
  v.resize(8,100);
  v.resize(12);

  std::cout << "vector contains: ";
  for(int i = 0; i<v.size(); i++) {
  	std::cout << ' ' << v[i];
  }
  std::cout << "\n";
  return 0;
}
