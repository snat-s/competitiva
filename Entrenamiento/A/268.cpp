#include <iostream>
#include <utility>
int main(void)
{
  int n = 0, answer = 0;
  std::cin >> n;
  std::pair<int, int> teams[n];
  
  for (int i = 0; i < n; ++i) {
    std::cin >> teams[i].first >> teams[i].second;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
 
      if(teams[i].first == teams[j].second || teams[i].first == teams[j].second && i != j) {
	answer++;
      }
    }
  }
  std::cout << answer << "\n";

  return 0;
}
