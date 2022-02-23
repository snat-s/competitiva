// https://codeforces.com/contest/266/problem/A
#include <iostream>
int main(void)
{
  int n = 0, res = 0;
  std::string s;
  std::cin >> n >> s;

  for (int i = 1; i < n ; i++) {
    if(s[i-1] == s[i]) {
      res++;
    }
  }
  std::cout << res << "\n";

  return 0;
}
