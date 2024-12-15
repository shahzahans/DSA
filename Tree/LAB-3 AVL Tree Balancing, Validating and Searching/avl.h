#include "bst.h"
#include <string>
using namespace std;

class AVLTree : public BST {
public:
   void insert(int) override;
   bool search(int);
   bool validate();
   string inOrder();

private:
  // TODO: Declare support functions as needed
    Node* insertAndBalance(Node* node, int newData); // Recursively inserts a node into the tree and ensures the AVL tree remains balanced
    Node* rotateLeft(Node* x); // Performs a left rotation to rebalance the tree when it is right-heavy
    Node* rotateRight(Node* y); // Performs a right rotation to rebalance the tree when it is left-heavy
    int getHeight(Node* node); // Returns the height of a given node; returns 0 if the node is null
    int getBalance(Node* node); // Calculates the balance factor of a given node (difference in height of left and right subtrees)
    // Recursively validates that the tree satisfies AVL balancing rules
    bool validateHelper(Node* node); // For validate()
    // Recursively performs an in-order traversal and appends node values to the result string
    void inOrderHelper(Node* node, string& result); // For inOrder()
};