/************************************\
 * Implementation of a singly `int` *
 * linked list                      *
 *                                  *
 * Author: @theteachr               *
\************************************/

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

node* get_node(int key) {
    node *new = malloc(sizeof(node));
    
    new->key = key;
    new->next = NULL;

    return new;
}

void add_last(node *head, node *new) {
    node *temp = head;

    while (temp->next)
        temp = temp->next;

    temp->next = new;
}

void add_first(node *head, node *new) {
    new->next = head->next;
    head->next = new;
}

int delete_first(node *head) {
    node *temp = head->next;
    int key = temp->key;    
    head->next = temp->next;
    free(temp);
    return key;
}

int delete_last(node *head) {
    node *t = head;
    node *u;
    int key;

    while (t->next) {
        u = t;
        t = t->next;
    }

    key = t->key;
    u->next = NULL;
    free(t);
    return key;
}

void display_nodes(node *head) {
    node *temp = head->next;

    printf("[ ");
    while (temp) {
        printf("%d ", temp->key);
        temp = temp->next;
    }
    printf("]\n");
}
