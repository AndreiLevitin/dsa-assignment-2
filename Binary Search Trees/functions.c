#include <stdlib.h>
#include "functions.h"

struct Node* insert(struct Node* ptr, char data) {
	struct Node* p;
	if (ptr == NULL) {
		p = (struct Node*)malloc(sizeof(struct Node));
		p->data = data; //adding data
		p->left = NULL;
		p->right = NULL;
		return(p); // return the address of memory allocated
	}
	else {
		//comparing if the item is lesser or greater and
		// calling based upon left or right insertion

		if (data < ptr->data)
		{
			ptr->left = insert(ptr->left, data);
		}
		else
		{
			ptr->right = insert(ptr->right, data);
		}
		return(ptr);
	}
}

struct Node* search(struct Node* ptr, char data) {
	if (ptr == NULL) return NULL;	// node not found
	if (data == ptr->data) return ptr;	// return found node
	if (data < ptr->data) {
		return search(ptr->left, data);	// continue search on the left
	}
	else {
		return search(ptr->right, data);	// continue search on the right
	}
}

// counts the amount of nodes in the tree
int countNodes(struct Node* ptr) {
	int counter;
	if (ptr == NULL) return(0);
	return countNodes(ptr->left) + countNodes(ptr->right) + 1;
}

// determine greatest height (excluding root) of tree
int treeHeight(struct Node* ptr) {
	int leftHeight, rightHeight;
	if (ptr == NULL) return(-1);
	leftHeight = treeHeight(ptr->left);
	rightHeight = treeHeight(ptr->right);
	if (leftHeight > rightHeight) {
		return (leftHeight + 1);
	}
	else {
		return (rightHeight + 1);
	}
}

// Inorder traversal print function
void printTreeInorderTraversal(struct Node* ptr) {
	if (ptr == NULL) return;
	printTreeInorderTraversal(ptr->left);	// first prints left subtreee
	printf("%c\n", ptr->data);				// second prints the root
	printTreeInorderTraversal(ptr->right);	// third prints right subtree
}