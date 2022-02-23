#include <cctype>
#include <iostream>
#include <set>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n = 0;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  std::set<int> sol;
  if (n >= 26) {
    for (int i = 0; i < n; ++i) {
      s[i] = tolower(s[i]);
      sol.insert(s[i]);
    }
    (sol.size() == 26) ? std::cout << "YES\n": std::cout << "NO\n";

  } else  {
    std::cout << "NO\n";

  }


  return 0; 
}
