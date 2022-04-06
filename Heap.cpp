#include <iostream>
#include <vector>
#include <climits>
#include <fstream>

using namespace std;

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
  int numLines = 0;
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
  
  if (input == "Line") {
    int numofNum, i;
    cout << "How many number will you enter?" << endl;
    cin >> numofNum;
    int a[30];
    for (i = 1; i <= numofNum; i++) {
      cout << "enter elements" << " " << (i) << endl;
      cin >> a[i];
    }
    build_maxheap(a,numofNum);
    cout << "Max Heap" << endl;
    for (i = 1; i <= numofNum; i++) {
      cout << a[i] << endl;
    }
  }
  else if (input == "File") {
    while (std::getline(fileInput, line)) {
      numLines++;
    }
    for (i = 1; i <= numLines; i++) {
      
    }
  }
}

