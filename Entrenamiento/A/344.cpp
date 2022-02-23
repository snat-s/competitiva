#include <iostream>
#include <utility>

int main(void)
{
  int n = 0, res = 1;
  std::cin >> n;
  std::pair<char, char> a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i].first >> a[i].second;
  }
  for (int i = 1; i < n; ++i) {
    if(a[i-1].second == a[i].first) {
      res++;
    } 
  }
  std::cout << res << "\n";
  
  return 0;
}
