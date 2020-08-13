/************************************\
 * Implementation of a growing      *
 * `int` queue as a Linked List     *
 * (Identify what's wrong)          *
 *                                  *
 * Author: @theteachr               *
\************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "q.h"

node* get_node(int k) {
	node *t = malloc(sizeof(node));
	t->key = k;
	t->next = NULL;
	return t;
}

void q_init(queue *q) {
	if (q == NULL)
		q = (queue *) malloc(sizeof(queue));

	q->head = q->tail = NULL;
}

void q_put(queue *q, int k) {
	node *new = get_node(k);

	if (q->head == NULL) {
		q->head = q->tail = new;
		return;
	}

	q->tail->next = new;
	q->tail = new;
}

int q_get(queue *q) {
	node *t = NULL;
	int k = -1;

	if (is_empty(q))
		return k;

	t = q->head;
	k = t->key;
	q->head = t->next;
	free(t);

	return k;
}

void q_display(queue q) {
	printf("[");
	while (!is_empty(&q)) {
		printf(" %d", q.head->key);
		q.head = q.head->next; 
		// printf(" %d", q_get(&q)); SIGABRT
	}
	printf(" ]\n");
}

int is_empty(queue *q) {
	return q->head == NULL;
}

