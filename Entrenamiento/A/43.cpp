#include <iostream>
#include <map>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n = 0;
	std::cin >> n;
	std::map<std::string, int> goals;
	std::string winner;
	int max = 0;
	while (n--) {
		std::string s;
		std::cin >> s;
		goals[s]++;
	}
	for (auto a : goals) {
		if(a.second > max) {
			winner = a.first;
			max = a.second;
		}
	}
	std::cout << winner << "\n";

  return 0;
}
