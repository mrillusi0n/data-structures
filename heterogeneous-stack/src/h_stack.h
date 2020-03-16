/**********************************\
 * Implementation of a 
 * heterogeneous stack.
 *
 * The idea is to store the type
 * as well as its size,
 * and determine the control string
 * accordingly.

 * (Very Inefficient)

 * Author: @theteachr (Nikhil CSB)
\**********************************/

#ifndef __H_STACK_
#define __H_STACK_

typedef	struct
{
	char type;
	void* data;
}h_node_t;

typedef struct
{
	h_node_t* nodes;
	int capacity;
	int top;
}h_stack_t;


void init_stack(h_stack_t*);
void push(h_stack_t*, void*, char);
void pop(h_stack_t*, void*);
void peek(h_stack_t*, void*);

#endif
