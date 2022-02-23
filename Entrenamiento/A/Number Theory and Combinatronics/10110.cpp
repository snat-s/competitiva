#include <iostream>
#include <cmath>

int main(void)
{
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  
  unsigned long long a = 1;
  bool isLighten = true;
  while (true) {
    std::cin >> a;
    if(a  == 0) return 0;
    unsigned long long b = sqrt(a);
    isLighten = (b*b == a);
    (isLighten) ? std::cout <<  "yes\n" 
    : std::cout << "no\n";
    
  }
  return 0;
}
