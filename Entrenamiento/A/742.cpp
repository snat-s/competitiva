#include <iostream>
int binaryExp(int a, int b){
  if (b == 0) {
    return 1;
  }
  int res = binaryExp(a, b/2);
  if (b%2) {
    return (res*res*a)%10;
  }
  else
    return  (res*res)%10;
}
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  int n, a = 8;
  std::cin >> n;
  std::cout<<binaryExp(a,n)<<"\n";
  return 0;
}
