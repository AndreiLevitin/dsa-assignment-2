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

