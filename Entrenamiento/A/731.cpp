#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <cmath>

int main(void)
{
  std::string a;
  int res = 0;
  char letra = 'a';
  std::cin >> a;
  for (int i = 0; i < a.size(); i++) {
    res+=std::min(abs(letra-a[i]),26-abs(letra-a[i]));
    letra = a[i];
  }
  std::cout << res << "\n";

  return 0;
}
