#include <vector>
class Queue {
  //FIFO
private:
  std::vector<int> data;
  int head;
public:
  Queue() {
    head = 0;
  }
  bool inQueue(int x){
    data.push_back(x);
    return true;
  }
  bool deQueue(){
    if(isEmpty()) {
      return false;
    }
    head++;
    return true;
  }
  bool isEmpty(){
    return data.empty();
  }
};
