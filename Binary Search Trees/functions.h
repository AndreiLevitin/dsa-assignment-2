#pragma once
struct Node {
	char data;
	struct Node* left;
	struct Node* right;
};

// Insert function
struct Node* insert(struct Node* ptr, char data);
// Search function
struct Node* search(struct Node* ptr, char data);
// Count Nodes function
int countNodes(struct Node* ptr);
// Determine Tree Height function
int getTreeHeight(struct Node* ptr);
// Inorder traversal print function
void printTreeInorderTraversal(struct Node* ptr);