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
private:
  int arrVol = 0;
  int intArray[100];
  void heapify(void);
};

int Heap::getCount() {
  return arrVol;
}

int Heap::getMax() {
  assert(arrVol > 0);
  return intArray[0];
}

void Heap::heapify() {
  return;
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



void max_heap(int *a, int m, int numofNum) {
  int j, t;
   t = a[m];
   j = 2 * m;
   while (j <= numofNum) {
     if (j < numofNum && a[j+1] > a[j]) {
       j = j + 1;
     }
      if (t > a[j]) {
	break;
      }
      else if (t <= a[j]) {
         a[j / 2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
  
void build_maxheap(int *a, int numofNum) {
  int k;
   for(k = numofNum/2; k >= 1; k--) {
      max_heap(a,k,numofNum);
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
