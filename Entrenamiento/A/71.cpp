#include <iostream>

int main(void) {
	std::cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	int n = 0;
	std::string a;
	std::cin >> n;
	while (n--) {
		std::cin >> a;
		if(a.length() > 10) {
			std::cout << a[0] << a.length()-2<< a[a.length()-1] << "\n";
		} else {
			std::cout << a << "\n";
		}
	}
	return 0;
}
