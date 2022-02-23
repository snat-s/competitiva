#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n = 0, m = 0, a = 0;
  std::cin >> n >> m >> a;
  std::cout << (n*m)/(a*a) << "\n";

  return 0;
}
/*
  n*m = ka
  k = (n*m)/a
*/
