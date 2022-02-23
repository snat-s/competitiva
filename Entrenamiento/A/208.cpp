#include <cstddef>
#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  std::string s;
  std::cin >> s;
  bool beggining = true;
  for (int i = 0; i < s.length()-3; ++i) {
    if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
      i+=2;
      if (!beggining) {
	std::cout << " ";
      }
    } else {
      beggining = false;
      std::cout <<s[i];
    }
  }
  std::cout << "\n";

  return 0;
}
