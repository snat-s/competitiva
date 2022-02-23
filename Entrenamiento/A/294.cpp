#include <iostream>
#include <utility>
int main(void)
{
  // std::cin.tie(0);
  // std::ios_base::sync_with_stdio(0);
  
  int n = 0, m = 0;
  std::cin >> n;
  int a[n+1];
  
  for (int i = 1; i <= n; i++) {
    std::cin>>a[i];
  }
  std::cin>>m;
  
 while (m--) {
   int x = 0, y = 0;
   std::cin >> y >> x;

   int izquierda = y-1;
   int derecha = a[x]-y;
   
   if(x == n) {
     a[x-1]+=izquierda; 
   } else if (x == 1) {
     a[x+1]+=derecha;
   } else {
     a[x+1]+=derecha;
     a[x-1]+=izquierda;
    
   }
   a[x] = 0;
   for (int c : a) {
     std::cout << c << "\n";
   }
 }
 
  return 0;
}
