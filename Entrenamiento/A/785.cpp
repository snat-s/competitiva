#include <iostream>
#include <string>
#include <utility>
#include <map>

int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n;
  std::cin >> n;
  std::map<std::string, int> faces = {
    {"Tetrahedron", 4},
    {"Cube", 6},
    {"Octahedron", 8},
    {"Dodecahedron", 12},
    {"Icosahedron", 20}
  };
  std::string s;
  int ans = 0;
  while (n--) {
    std::cin >> s;
    ans+=faces[s];
  }
  std::cout << ans << "\n";

  return 0;
}
