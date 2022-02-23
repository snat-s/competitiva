#include <iostream>
int main(void)
{
  int a[4], res = 0;
  std::string s;
  std::cin >> a[0] >> a[1] >> a[2] >> a[3] >> s;
  for (int i = 0; i < s.length(); i++) {
    res+=a[s[i]-'0'-1];
  }
  std::cout << res << "\n";
  return 0;
}
