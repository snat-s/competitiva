#include <vector>
class Queue {
private:
  std::vector<int> data;
  int head;
public:
  Queue() {
    head = 0;
  }
  bool enQueue(int k) {
    data.push_back(k);
    return true;
  }
  bool deQueue() {
    if(isEmpty()) {
      return false;
    }
    head++;
    return true;
  }
  bool isEmpty() {
    if(data.size() == 0) {
      return true;
    } else {
      return false;
    }
  }
};
