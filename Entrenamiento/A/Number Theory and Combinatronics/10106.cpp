#include <iostream>
#include <vector>

int main(void)
{
  std::string x, y;

  for (int i = 0; i < x.length(); i++) {
    std::vector<int> current_answer;
    for (int j = 0; j < y.length(); j++) {
      current_answer.push_back(x[0]-'0'*y[0]-'0');
      if(current_answer[i]>9) {
	int a = current_answer[i]/10, b = current_answer[i]%10;
	current_answer.erase(current_answer.begin()+i);
	current_answer.push_back(b);
	current_answer.push_back(a);
      }
    }
  }
  return 0;
}
