#include <iostream>
#include <algorithm>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  std::string s;
  std::cin >> s;
  int n = s.length();
  int a[n]={};
  for (int i = 0, j = 0; i < s.length(); i++) {
    if (s[i] == '+') {
      a[j] = s[i-1]-'0';
      j++;
    } else if (i == s.length()-1) {
      a[j] = s[i]-'0';
    }
  }
  std::sort(a,a+n);
  for (int i = 0; i < s.length(); i++) {
    if (a[i] == 0 || a[i] > 3) {
      continue;
    }
    else if (i == s.length()-1) {
      std::cout << a[i] << "\n";
      continue;
    }
   std::cout << a[i] << "+";
  }
  return 0;
}
