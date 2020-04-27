/************************************\
** Implementation of a growing      **
** `int` queue as a Linked List     **
** (Maybe doubly)                   **
**                                  **
** Author: @theteachr (Nikhil CSB)  **
\************************************/

#ifndef Q_H
#define Q_H

struct n
{
	int key;
	struct n *next;
};

typedef struct n node;

struct q
{
	node *head;
	node *tail;
};

typedef struct q queue;

void q_init(queue *);
void q_put(queue *, int);
int q_get(queue *);
void q_display(queue);
int is_empty(queue *);

#endif

