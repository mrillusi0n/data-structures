/************************************\
** Implementation of a              **
** Binary Search Tree               **
**                                  **
** Author: @theteachr (Nikhil CSB)  **
\************************************/

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

leaf* make_leaf(int k) {
	leaf* l = malloc(sizeof(leaf));
	
	l->key = k;
	l->left = NULL;
	l->right = NULL;

	return l;
}

leaf* add_leaf(leaf* root, leaf* new_node) {
	if (!root) return new_node;

	if (new_node->key < root->key)
		root->left = add_leaf(root->left, new_node);
	else if (new_node->key > root->key)
		root->right = add_leaf(root->right, new_node);

	return root;
}

void show_tree(leaf* root) {
	if (root) {
		show_tree(root->left);
		printf("%d ", root->key);
		show_tree(root->right);
	}
}