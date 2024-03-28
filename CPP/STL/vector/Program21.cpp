// insert()
#include <iostream>
#include <vector>

int main () {
  std::vector<int> v (3,100);
  std::vector<int>::iterator it;

  it = v.begin();
  it = v.insert ( it , 200 );

  v.insert (it,2,300);

  it = v.begin();

  std::vector<int> v1 (2,400);
  v.insert (it+2,v1.begin(),v1.end());

  int myarray [] = { 501,502,503 };
  v.insert (v.begin(), myarray, myarray+3);

  std::cout << "vector contains:";
  for (it=v.begin(); it<v.end(); it++) {
    std::cout << ' ' << *it;
  }
  std::cout << '\n';
  return 0;
}
