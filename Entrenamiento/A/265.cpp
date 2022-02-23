#include <iostream>
int main(void)
{
  int res = 1;
  std::string t, s;
  std::cin >> s >> t;

  for (int  i = 0; i < t.length(); i++) {
    if (s[res-1] == t[i]) {
      res++;
    }
  }
  std::cout << res << "\n";

  return 0;
}
