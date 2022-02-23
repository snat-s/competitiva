#include <iostream>
#include <cmath>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  long long n, ans = 0;
  std::cin >> n;
  if (n%2) {
    std::cout << (-1*n/2)-1  << "\n";
  } else {
    std::cout << (n/2) << "\n";

  }


  return 0;
}
/*
  -1 = -1
  -1+2 = 1
  -1+2-3 = -2
  -1+2-3+4 = 2
  -1+2-3+4-5 = -3
*/
