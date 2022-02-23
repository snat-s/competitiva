
// learning resource https://www.youtube.com/watch?v=cIBFEhD77b4
#include <iostream>
#include <vector>
#include <queue>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  std::vector<std::vector<int>> adj(3);
  char input1, value, input2;

  for (int i = 0; i < 3; ++i) {
    std::cin >> input1 >> value >> input2;
    if (value == '>') {
      adj[input2-'A'].push_back(input1-'A');
    } else {
      adj[input1-'A'].push_back(input2-'A');
    }
  }
  std::vector<int> inDegree(3,0);

  for (int i = 0; i < 3; i++) {
    for (int u : adj[i]) {
      inDegree[u]++;
    }
  }

  std::queue<int> q;

  for (int i = 0; i < 3; ++i) {
    if (inDegree[i] == 0) {
      q.push(i);
    }
  }

  int index = 0;
  std::vector<char>order(3, 0);

  while (!q.empty()) {
    int u = q.front();
    q.pop();
    order[index++] = u+'A';
    for (int v : adj[u]) {
      inDegree[v]--;
      if (inDegree[v] == 0) {
	q.push(v);
      }
    }
  }
  if (index != 3) {
    std::cout << "Impossible\n";
    return 0;
  }

  for(auto u : order)
    std::cout << u;

  std::cout <<  "\n";

  return 0;
}
