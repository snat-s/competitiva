#include <iostream>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n,t,k,d, t1 = 0, t2 = 0;
  n = t = k = d = 0;
  std::cin >> n >> t >> k >> d;

  t2 = d;

  for (int i = 0; i < n; i+=(k*2)) {
    // std::cout << k*2 << " Cakes are being made at time "<< t2+t<<"\n";

    t2+=t;
  }
  // std::cout << " " << t2 << "\n";

  for (int i = 0; i < n; i+=k) {
    //std::cout << k << " Cakes are being made\n";
    t1+=t;
  }
  std::cout << t2 << " " << t1 << "\n";
  if (t2<t1) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }
  return 0;
}
