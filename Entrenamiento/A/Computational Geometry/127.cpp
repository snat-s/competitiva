#include <cmath>
#include <cstdio>
#include <utility>

int main(void) {
 
  int n, k;
  scanf("%d%d", &n, &k);
  float ans = 0;
  float x, y;
  std::pair<float, float> coordenadas[n];
  for (int i = 0; i < n; ++i) {
    scanf("%f%f", &x, &y);
    coordenadas[i].first = x;
    coordenadas[i].second = y;
  }
  for (int i = 1; i < n-1; ++i) {
    ans+=std::sqrt((coordenadas[i].first-coordenadas[i-1].first)*(coordenadas[i].first-coordenadas[i-1].first)+(coordenadas[i].second-coordenadas[i-1].second)*(coordenadas[i].second-coordenadas[i-1].second));
  }
  printf("%f\n",(ans/50)/60);

  return 0;
}
