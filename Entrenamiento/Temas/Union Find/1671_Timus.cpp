#include <cstddef>
#include <utility>
#include <vector>
#include <iostream>
class DisjointSet {
private:
  std::vector<int> root;
public:
  DisjointSet(int size) : root(size) {
    for (int i = 0; i < size; i++) {
      root[i] = i;
    }
  }
  int find(int x){
    if(x == root[x]) {
      return x;
    }
    return root[x] = find(root[x]);
  }
  void quickUnion(int x, int y){
    int rootX = find(x);
    int rootY = find(y);
    if(rootX != rootY) {
      root[rootY] = rootX;
    }
  }
};


int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n,m;
  std::cin>>n>>m;
  std::pair<int, int> 
  DisjointSet webs(n);

  return 0;
}    
