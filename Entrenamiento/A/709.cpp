#include <iostream>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, d, b, res = 0, bascket = 0;
  n = d = b = 0;
  std::cin >> n >> b >> d;
  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i]>b) {
      continue;
    } else {
      bascket+=a[i];
    }
    if (bascket > d) {
      res++;
      bascket = 0;
    } 
  }
  std::cout << res << "\n";

  return 0;
}
