#include <iostream>
#include <vector>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  std::vector<std::vector<int>> adj(3);
  char relacion;
  for (int i = 0; i < 3; ++i) {
    char input1, relacion, input2;
    std::cin >> input1 >> relacion >> input2;
    adj[input1-'A'].push_back(input2);
  }
  
  return 0;
}
