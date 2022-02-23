#include <algorithm>
#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  std::string a, b;
  std::cin >> a >> b;
  int res = 0;
  if(a.length() > b.length()) {
    int vuelta = 0;
    for (int i = 0; i < a.length(); ++i) {
      if(a[i] == b[i]) {
	res = std::max(res, vuelta);
      }
    }
  } else {
    for (int i = 0; i < b.length(); ++i) {
      
    }
  }
  return 0;
}
