/************************************\
** Implementation of a singly `int` **
** linked list                      **
**                                  **
** Author: @theteachr (Nikhil CSB)  **
\************************************/

#ifndef LIST_H
#define LIST_H

struct node
{
    int key;
    struct node *next;
};

typedef struct node node;

node* get_node(int);
void add_last(node *, node *);
void add_first(node *, node *);
int delete_last(node *);
int delete_first(node *);
void display_nodes(node *);

#endif