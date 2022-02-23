// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=417
#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
int main(void) {
  // std::cin.tie(0);
  // std::ios_base::sync_with_stdio(0);
  char type;
  std::vector<std::tuple<float,float,float,float>> rectangles;
  while (true) {
    std::cin >> type;
    if (type == '*') {
      break;
    } else {
      float x1,y1,x2,y2;
      std::cin >> x1 >> y1 >> x2 >> y2;
      rectangles.push_back({x1,y1,x2,y1});
    }
  }
  std::cout <<  "Hola";

  std::vector<std::pair<float, float>> points;
  int j = 0;
  float x, y;
  while (true) {
    j++;
    std::cin >> x >> y;
    std::cout << x << " " << y << "\n";

    if (x == 9999.9 && y == 9999.9) {
      return 0;
    }
    bool notContained = true;
    for (int i = 0; i < rectangles.size()-1; ++i) {
      auto x1 = std::get<0>(rectangles[i]);
      auto y1 = std::get<1>(rectangles[i]);
      auto x2 = std::get<2>(rectangles[i]);
      auto y2 = std::get<3>(rectangles[i]);
      if (x <= x1 && x>=x1 &&
	  x <= x2 && x>=x2 &&
	  y <= y1 && y>=y1 &&
	  y <= y2 && y>=y2) {
	std::cout << "Point " << j << " is contained in figure " << i << "\n";
	notContained = false;
      } 
    }
    if (notContained) {
      std::cout << "Point "<< j << " is not contained in any figure" << "\n";
    }
  }
  return 0;
}
