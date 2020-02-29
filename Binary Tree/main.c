/************************************\
** Implementation of a              **
** Binary Search Tree               **
**                                  **
** Author: @theteachr (Nikhil CSB)  **
\************************************/

#include "tree.h"

int main(int argc, char const *argv[])
{
	leaf *root = 0;
	leaf *n = 0;

	int nums[] = { 12, 0, 45, 5, 0, 98, 0 };

	root = make_leaf(nums[0]);

	for (int i = 1; i < 7; ++i) {
		n = make_leaf(nums[i]);
		add_leaf(root, n);
	}

	show_tree(root);

	return 0;
}