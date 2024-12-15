#include "avl.h"
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// TODO: Create the code that overrides the base insert function and
//       includes a function to balance the tree after each insert
void AVLTree::insert(int newData) {
    root = insertAndBalance(root, newData); // Calls the recursive function to insert and balance
}

// Support Function #1
// Helper function to recursively insert a node and balance the AVL tree
Node* AVLTree::insertAndBalance(Node* node, int newData) {
    if (!node) {
        return new Node(newData); // Create a new node if we reach a null position
    }

    // Standard BST insertion logic
    if (newData < node->data) {
        node->left = insertAndBalance(node->left, newData); // Insert into the left subtree
    } else if (newData > node->data) {
        node->right = insertAndBalance(node->right, newData); // Insert into the right subtree
    } else {
        return node; // Return the node if duplicate value is found (no duplicates allowed)
    }

    // Update the height of the current node after insertion
    node->height = 1 + std::max(getHeight(node->left), getHeight(node->right));

    // Calculate the balance factor to check if the tree is unbalanced
    int balance = getBalance(node);

    // Perform rotations to balance the tree if needed
    if (balance > 1 && newData < node->left->data) {
        return rotateRight(node); // Left-heavy (LL case)
    }
    if (balance < -1 && newData > node->right->data) {
        return rotateLeft(node); // Right-heavy (RR case)
    }
    if (balance > 1 && newData > node->left->data) {
        node->left = rotateLeft(node->left); // Left-Right case (LR)
        return rotateRight(node);
    }
    if (balance < -1 && newData < node->right->data) {
        node->right = rotateRight(node->right); // Right-Left case (RL)
        return rotateLeft(node);
    }

    return node; // Return the balanced node
}

// Support Function #2
// Performs a left rotation on a subtree
Node* AVLTree::rotateLeft(Node* x) {
    Node* y = x->right; // Set y as the right child of x
    Node* T2 = y->left; // Save the subtree to avoid losing it

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights of rotated nodes
    x->height = 1 + std::max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + std::max(getHeight(y->left), getHeight(y->right));

    return y; // Return the new root of the rotated subtree
}

// Support Function #3
// Performs a right rotation on a subtree
Node* AVLTree::rotateRight(Node* y) {
    Node* x = y->left; // Set x as the left child of y
    Node* T2 = x->right; // Save the subtree to avoid losing it

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights of rotated nodes
    y->height = 1 + std::max(getHeight(y->left), getHeight(y->right));
    x->height = 1 + std::max(getHeight(x->left), getHeight(x->right));

    return x; // Return the new root of the rotated subtree
}

// Support Function #4
// Returns the height of a node, or 0 if the node is null
int AVLTree::getHeight(Node* node) {
    return node ? node->height : 0;
}

// Support Function #5
// Calculates the balance factor of a node
int AVLTree::getBalance(Node* node) {
    return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

// TODO: Create the code to search the tree for a value
// Searches for a value in the AVL tree
bool AVLTree::search(int key) {
    Node* current = root; // Start at the root
    while (current) {
        if (key == current->data) {
            return true; // Value found
        } else if (key < current->data) {
            current = current->left; // Traverse the left subtree
        } else {
            current = current->right; // Traverse the right subtree
        }
    }
    return false; // Value not found
}

// TODO: Create the code to determine if the tree is a valid AVL Tree
// Validates if the tree satisfies AVL properties
bool AVLTree::validate() {
    return validateHelper(root); // Calls the helper function to validate the tree
}

// Helper function to validate the AVL tree
bool AVLTree::validateHelper(Node* node) {
    if (!node) {
        return true; // Null nodes are valid
    }

    int balance = getBalance(node); // Calculate the balance factor
    if (balance < -1 || balance > 1) {
        return false; // Tree is unbalanced
    }

    // Recursively validate left and right subtrees
    return validateHelper(node->left) && validateHelper(node->right);
}

// TODO: Create the code to return a string with the space separated nodes
// showing an inorder traversal of the tree
// Performs an in-order traversal of the tree and returns the result as a string
string AVLTree::inOrder() {
    string result;
    inOrderHelper(root, result); // Calls the helper function
    return result;
}

// Helper function to perform in-order traversal
void AVLTree::inOrderHelper(Node* node, string& result) {
    if (node) {
        inOrderHelper(node->left, result); // Traverse the left subtree
        result += to_string(node->data) + " "; // Append the current node's data
        inOrderHelper(node->right, result); // Traverse the right subtree
    }
}