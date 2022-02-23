#include <iostream>
#include <cmath>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n, m, a, d;
    std::cin >> n >> m >> a >> d;
    int r =  floor(m/a) - floor(n/a);
    int r1 =  floor(m/(a+d)) - floor(n/(a+d));
    int r2 =  floor(m/(a+(2*d))) - floor(n/a+(2*d));
    int r3 =  floor(m/(a+(3*d))) - floor(n/a+(3*d));    
    int r4 =  floor(m/(a+(4*d))) - floor(n/a+(4*d));
    
  }
  return 0;
}
