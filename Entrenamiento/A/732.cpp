#include <iostream>

int main(void)
{
  int k, r;
  std::cin >> k >> r;
  for(int i = 1; i<10; i++) {
    if((((k*i)%10)-r) == 0 || (k*i)%10 == 0) {
      std::cout << i << "\n";
      return 0;
    } 
  }
  std::cout << "10\n";
  return 0;
}
