#pragma once
struct Node {
	char data;
	struct Node* left;
	struct Node* right;
};

// Insert
struct Node* insert(struct Node* ptr, char data);
// Search
struct Node* search(struct Node* ptr, char data);
// Count Nodes
int countNodes(struct Node* ptr);
// Determine Tree Height

