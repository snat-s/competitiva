#include <iostream>
int main(void) {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);
  std::string keyboard1 =  "qwertyuiop";
  std::string keyboard2 =   "asdfghjkl;";
  std::string keyboard3 = "zxcvbnm,./";
  
  std::string s, sol;
  char direction;
  std::cin >> direction >> s;
  if (direction == 'R') {
    int j = 0;
    while (sol.length() != s.length()) {
      for (int i = 0; i < keyboard1.length(); ++i) {
	if (keyboard1[i]==s[j]) {
	  sol += keyboard1[i-1];
	  j++;
	}
      }
      for (int i = 0; i < keyboard2.length(); ++i) {
	if (keyboard2[i]==s[j]) {
	  sol += keyboard2[i-1];
	  j++;
	}
      }
      for (int i = 0; i < keyboard3.length(); ++i) {
	if (keyboard3[i]==s[j]) {
	  sol += keyboard3[i-1];
	  j++;
	}
      }
    }
    std::cout << sol << "\n";
  } else {
    int j = 0;
    while (sol.length() != s.length()) {
      for (int i = 0; i < keyboard1.length(); ++i) {
	if (keyboard1[i]==s[j]) {
	  sol += keyboard1[i+1];
	  j++;
	}
      }
      for (int i = 0; i < keyboard2.length(); ++i) {
	if (keyboard2[i]==s[j]) {
	  sol += keyboard2[i+1];
	  j++;
	}
      }
      for (int i = 0; i < keyboard3.length(); ++i) {
	if (keyboard3[i]==s[j]) {
	  sol += keyboard3[i+1];
	  j++;
	}
      }
    }
    std::cout << sol << "\n";
  }
  return 0;
}
