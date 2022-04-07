#include <iostream>
#include <vector>
#include <climits>
#include <fstream>
#include <assert.h>

using namespace std;

class Heap {
public:
  void insert(int);
  int rmMax(void);
  int getMax(void);
  int getCount(void);
  void siftDown(int, int);
private:
  int arrVol = 0;
  int intArray[100];
  void heapify(void);
  int iParent(int i) {
    return((i-1) / 2);
  }
  int iLeftChild(int i) {
    return(2*i + 1);
  }
  int iRightChild(int i) {
    return(2*i + 2);
  }
};

int Heap::getCount() {
  return arrVol;
}

int Heap::getMax() {
  assert(arrVol > 0);
  return intArray[0];
}

void Heap::heapify() {
  int start = arrVol - 1;

  while (start >= 0) {
    siftDown(start, arrVol - 1);
    start--;
  }
}

void Heap::insert(int inInt) {
  assert(arrVol <= 100);
  intArray[arrVol] = inInt;
  arrVol++;
  heapify();

  return;
}

int Heap::rmMax() {
  assert(arrVol > 0);
  int tempInt = intArray[0];
  intArray[0] = intArray[arrVol - 1];
  arrVol--;
  heapify();
  
  return tempInt;
}

void Heap::siftDown(int start, int end) {
  int root = start;
  int child;
  int swap;
  int tempInt;

  while (iLeftChild(root) <= end) {
    child = iLeftChild(root);
    swap = root;
    if (intArray[swap] < intArray[child]) {
      swap = child;
    }
    if ((child + 1 <= end) && (intArray[swap] < intArray[child + 1])) {
      swap = child + 1;
    }
    if (swap == root) {
      return;
    }
    else {
      tempInt = intArray[root];
      intArray[root] = intArray[swap];
      intArray[swap] = tempInt;
      root = swap;
    }
  }
}



// Driver program to test above functions
int main() {
  Heap thisHeap;
  ifstream fileInput("input.txt");
  string line;
  string input;
  string tempStr;
  int tempInt;
  int inputNum;
  vector<int> inputVect;
  
  cout << "Commands (Case Sensitive):" << endl;
  cout << "Line: enter a list of numbers in the input line" << endl;
  cout << "File: will use the list of names provided on the .txt file included" << endl;
  cin >> input;
  
  if (input == "Line") {
    int numofNum, i;
    cout << "How many number will you enter?" << endl;
    cin >> numofNum;
    
    
    for (i = 1; i <= numofNum; i++) {
      cout << "Enter number " << (i) << endl;
      cin >> tempInt;
      thisHeap.insert(tempInt);
      cout << endl << "Size of array: " << thisHeap.getCount() << endl;
    }
   
  
    while (thisHeap.getCount() > 0) {
      cout << thisHeap.rmMax() << endl;
    }
  }
  /*
  else if (input == "File") {
    while (std::getline(fileInput, line)) {
      numLines++;
    }
    for (i = 0; i <= numLines; i++) {
      
    }
  }

  */
}
