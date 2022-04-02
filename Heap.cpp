#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void swap(int *x, int *y);


//class for min heap
class MinHeap {

public:
  //constructor
  MinHeap(int capacity);

  //heapify a subtree with the root at a given index
  void MinHeapify(int );

  int parent(int i) { return (i-1)/2; }
  
    // to get index of left child of node at index i
    int left(int i) { return (2*i + 1); }
  
    // to get index of right child of node at index i
    int right(int i) { return (2*i + 2); }
  
    // to extract the root which is the minimum element
    int extractMin();
  
    // Decreases key value of key at index i to new_val
    void decreaseKey(int i, int new_val);
  
    // Returns the minimum key (key at root) from min heap
    int getMin() { return harr[0]; }
  
    // Deletes a key stored at index i
    void deleteKey(int i);
  
    // Inserts a new key 'k'
    void insertKey(int k);
};

int main() {
  
}
