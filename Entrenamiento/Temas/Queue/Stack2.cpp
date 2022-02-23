#include <vector>
class Stack {
private:
  std::vector<int> data;
public:
  void push(int x){
    data.push_back(x);
  }
  bool pop(){
    data.pop_back();
  }
  int top(){
    return data.back();
  }
  bool isEmpty(){
    return data.empty();
  }

};
