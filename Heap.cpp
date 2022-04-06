#include <iostream>
#include <vector>
#include <climits>
#include <fstream>

using namespace std;

void swap(int *x, int *y);

//code is based off of example from https://www.geeksforgeeks.org/binary-heap/?ref=lbp
//class for min heap
class MaxHeap {

  int *harr;
  int capacity;
  int heap_size;
public:
  //constructor
  MaxHeap(int capacity);

  //heapify a subtree with the root at a given index
  void MaxHeapify(int );

  int parent(int i) { return (i-1)/2; }
  
    // to get index of left child of node at index i
    int left(int i) { return (2*i + 1); }
  
    // to get index of right child of node at index i
    int right(int i) { return (2*i + 2); }
  
    // to extract the root which is the minimum element
    int extractMax();
  
    // Decreases key value of key at index i to new_val
    void decreaseKey(int i, int new_val);
  
    // Returns the minimum key (key at root) from min heap
    int getMax() { return harr[0]; }
  
    // Deletes a key stored at index i
    void deleteKey(int i);
  
    // Inserts a new key 'k'
    void insertKey(int k);
};

// Constructor: Builds a heap from a given array a[] of given size
MaxHeap::MaxHeap(int cap)
{
    
}
  
// Inserts a new key 'k'
void MaxHeap::insertKey(int k)
{
    
}
  
// Decreases value of key at index 'i' to new_val.  It is assumed that
// new_val is smaller than harr[i].
void MaxHeap::decreaseKey(int i, int new_val)
{
    
}
  
// Method to remove minimum element (or root) from min heap
int MaxHeap::extractMax()
{
    
}
  
  
// This function deletes key at index i. It first reduced value to minus
// infinite, then calls extractMin()
void MaxHeap::deleteKey(int i)
{
    
}
  
// A recursive method to heapify a subtree with the root at given index
// This method assumes that the subtrees are already heapified
void MaxHeap::MaxHeapify(int i)
{
    
}
  
// A utility function to swap two elements
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
  
// Driver program to test above functions
int main()
{
  ifstream fileInput("input.txt");

  string line;
  string input;
  string tempStr;
  int inputNum;
  vector<int> inputVect;
  cout << "Commands (Case Sensitive):" << endl;
  cout << "Line: enter a list of numbers in the input line" << endl;
  cout << "File: will use the list of names provided on the .txt file included" << endl;
  cin >> input;

  //MinHeap h(100);
  if (input == "Line") {
    while (true) {
      int tempIn;
      cout << "Input a number 1-1000:" << endl;
      cout << "Input -1 if you want to quit" << endl;
      cin >> tempStr;
      inputNum = atoi(tempStr.c_str());
      if (inputNum == -1) {
	break;
      }
      // h.insertKey(inputNum);
    }
  }
  else if (input == "File") {
    while (std::getline(fileInput, line)) {
      inputNum = atoi(line.c_str());
      //h.insertKey(inputNum);
    }
  }

  // cout << h.getMin() << endl;
}
