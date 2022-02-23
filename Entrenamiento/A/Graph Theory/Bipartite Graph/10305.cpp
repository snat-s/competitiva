#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, m;
  while (true) {
    std::cin >> n >> m;
    if (n == 0 && m == 0) {
      return 0;
    }
  
    std::vector<std::vector<int>> adj(n+1);
    std::vector<bool> visited(n+1, false);
    std::vector<int> ans;
    int a, b;

    for (int i = 1; i <= m; ++i) {
      std::cin >> a >> b;
      adj[a].push_back(b);
    }

    std::vector<int> inDegree(n+1, 0);
    std::queue<int> q;

    for (int i = 1; i <= n; ++i) {
      for(int v : adj[i]) {
	inDegree[v]++;
      }
    }

    for(int i = 1; i <= n; i++) {
      if (inDegree[i] == 0) {
	q.push(i);
      }
    }
    int index = 1;
    std::vector<int> order(n+1,0);

    while (!q.empty()) {
      int v = q.front();
      q.pop();
      order[index++] = v;

      for(int u : adj[v]) {
	inDegree[u]--;
	if (inDegree[u] == 0) {
	  q.push(u);
	}
      }

    }
    if (index!=n) {
      std::cout << "Impossible\n";

    }
    for(int a : order) {
      if (a) {
	std::cout << a << " ";
      }
    }
      
    std::cout <<  "\n";

  }
  return 0;
}
