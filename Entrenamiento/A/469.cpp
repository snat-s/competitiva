#include <iostream>
#include <set>

int main(void) {
	std::cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	int n, p, q, a; // x->p y->q
	std::set<int> sol;
	std::cin >> n >> p;
	for (int i = 0; i < p; ++i) {
		std::cin >> a;
		sol.insert(a);
	}

	std::cin >> q;
	for (int i = 0; i < q; ++i) {
		std::cin >> a;
		sol.insert(a);
	}

	if (sol.size() == n) {
    std::cout << "I become the guy.\n";
	} else {
    std::cout << "Oh, my keyboard!\n";
	}
	return 0;
}
