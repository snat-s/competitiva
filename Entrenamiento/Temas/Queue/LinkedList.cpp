class LinkedList {
private:
  int value;
  LinkedList *next;
public:
  LinkedList(int x) : value(x), next(nullptr){}
  int get(int index) {
    int i = 0;
    while(i < index) {
      next = next->LinkedList;
      i++;
    }
  }
};
