#include <cmath>
#include <vector>

std::vector<int> mergeSort(std::vector<int> data, int right, int left) {
  if(left < right) {
    int middle = floor(right+left)/2;
    mergeSort(data, left, middle);
    mergeSort(data, middle+1, right);
    merge(data, right, left, middle);
  }
    return data;
}
std::vector<int> merge(std::vector<int> data, int right, int left, int middle) {
  
}
