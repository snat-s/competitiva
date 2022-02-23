#include <iostream>
#include <vector>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  long long  n, k;
	std::cin >> n >> k;
	std::vector<long long> sol(n);
	for (int i = 1, j = 0; i <= n; j++, i+=2) {
    sol[j] = i;
	}
	for (int i = 2, j = (n/2)+1; i <= n; j++,i+=2) {
    sol[j] = i;
	}
	std::cout << sol[k-1] << "\n";
  return 0;
}
