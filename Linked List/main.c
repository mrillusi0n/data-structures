/************************************\
** Implementation of a singly `int` **
** linked list                      **
**                                  **
** Author: @theteachr (Nikhil CSB)  **
\************************************/

#include <stdio.h>
#include "list.h"

int main() {
    node *head;

    head = get_node(0);

    add_last(head, get_node(3));
    add_last(head, get_node(9));
    delete_first(head);
    add_last(head, get_node(8));
    delete_last(head);
    add_first(head, get_node(16));
    add_last(head, get_node(7));

    display_nodes(head);
}