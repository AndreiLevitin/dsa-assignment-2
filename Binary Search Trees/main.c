#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

#define MIN_AMOUNT_OF_CHARS 11
#define MAX_AMOUNT_OF_CHARS 20

int main() {
	struct Node* root;
	root = NULL;

	// REQ01: Inserts a random number of chars (from 11 to 20 chars, inclusive) into the tree. 
	// Each char can range from lowercase a to lowercase z.
	srand(time(NULL));	// Important to get different random values
	int numberOfChars = (rand() % (MAX_AMOUNT_OF_CHARS - MIN_AMOUNT_OF_CHARS + 1)) + MIN_AMOUNT_OF_CHARS;	// gets random amount of chars between min (11) and max (20)
	char randomCharacter;
	for (int i = 0; i < numberOfChars; i++) {
		randomCharacter = 'a' + (rand() % 26);
		root = insert(root, randomCharacter);
	}

	// REQ02: Print out the all the chars inserted into the tree, in sorted alphabetical order.
	printf("Printing all chars from the tree in sorted alphabetical order:\n");
	printTreeInorderTraversal(root);

	// REQ03: Print the number of nodes in the tree.
	printf("Printing the number of nodes in the tree: %d\n", countNodes(root));

	// REQ04: Print the tree height.
	printf("Printing the tree height: %d\n", getTreeHeight(root));

	// Additional test for search() function
	char buffer = 'g';
	struct Node* searchPtr;
	searchPtr = search(root, buffer);
	if (searchPtr == NULL) printf("Not found\n");
	else printf("The char has been found\n");
	
	return 0;
}