// shrink_to_fit()
#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> v(100);
  std::cout << "1. capacity of vector: " << v.capacity() << '\n';

  v.resize(10);
  std::cout << "2. capacity of vector: " << v.capacity() << '\n';

  v.shrink_to_fit();
  std::cout << "3. capacity of vector: " << v.capacity() << '\n';

  return 0;
}
