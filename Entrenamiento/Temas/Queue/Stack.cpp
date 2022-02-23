#include <vector>
class Stack{
  //LIFO
private:
  std::vector<int> data;
public:
  void push(int k) {
    data.push_back(k);
  }
  bool pop() {
    if(isEmpty()) {
      return false;
    }
    data.pop_back();
    return true;
  }
  bool isEmpty() {
    return data.empty();
  }
  int top() {
    return data.back();
  }
};
