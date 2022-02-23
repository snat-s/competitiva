#include <iostream>
#include <string>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  std::string s, aux;
  std::cin >> s;
  int n = 0, ans = 0;
  while (s.length() > 1) {
    n = 0;
    for (int i = 0; i < s.length(); ++i) {
      n+=(s[i]-'0');
    }
    s = std::to_string(n);
    ans++;
   
  } 
  std::cout << ans << "\n";

  return 0;
}
