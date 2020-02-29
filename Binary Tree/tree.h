/************************************\
** Basic Tree Data Structure        **
**                                  **
** Author: @theteachr               **
\************************************/

#ifndef __TREE_H_
#define __TREE_H_

struct leaf {
	int key;
	struct leaf* left;
	struct leaf* right;
	struct leaf* parent; // Haven't put this to use yet
};

typedef struct leaf leaf;

leaf* make_leaf(int);
leaf* add_leaf(leaf*, leaf*);
void show_tree(leaf*);

#endif