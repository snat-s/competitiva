#include <iostream>
int main(void) {
	std::cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	long long n, t, sol = 1, max = 1;
	std::cin >> n >> t;
	for (int i = 1; i < n; ++i) {
		sol*=10;
		max = sol;
	}

	max*=10;

	while (sol%t != 0 || sol > max)
		sol++;
	int aux = sol;
	for(int i = 0; i < n; i++) {
		aux/=10;
	}
	if(n == 1 && t == 10) {
		std::cout << -1 << "\n";
		return 0;
	}
	if (sol > max)
		std::cout << -1 << "\n";
	else
		std::cout << sol << "\n";

 return 0;
}
