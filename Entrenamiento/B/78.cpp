#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n;
  std::cin >> n;
  std::string s = "ROYGBIV";
  int entireString = n/7, left = n%7;
  for (int i = 0; i < entireString; ++i) {
    std::cout << s;
  }
  for (int i = 0; i < left; ++i) {
    std::cout << s[i];
  }
  std::cout << "\n";

  return 0;
}
