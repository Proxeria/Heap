#include <iostream>
#include <vector>

using namespace std;

struct Node {
  int data;
  struct Node* left;
  struct Node* right;

  Node(int val) {
    data = val;

    //initialize l/r node children to null
    left = NULL;
    right = NULL;
  }
};

int main() {
  //make root
  struct Node* root = new Node(1);

  //follow tree
  root->left = new Node(2);
  root->right = new Node(3);

  root->left = new Node(4);

  return 0;
}
