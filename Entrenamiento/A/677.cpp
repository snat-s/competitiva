#include <iostream>
int main(void)
{
  int n, h, a, res;
  n = h = a = res = 0;
  std::cin >> n >> h;
  
  for (int i = 0; i < n; i++) {
    std::cin >> a;
    (a > h) ?  res+=2 : res++;
  }
  std::cout << res << "\n";
  return 0;
}
