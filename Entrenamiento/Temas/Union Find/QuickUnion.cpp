#include <vector>
class QuickUnion {
private:
  std::vector<int> root;
public:
  QuickUnion(int size) : root(size) {
    for (int i = 0; i < size; i++) {
      root[i] = i;
    }
  }
  //O(n)
  int find(int x) {
    while(x != root[x]) {
      x = root[x];
    }
    return x;
  }
  //O(n)
  void Union(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if(rootX != rootY) {
      root[rootX] = rootY;
    }
  }
  //O(n)
  bool connected(int x, int y) {
    return find(x) == find(y);
  }
};
