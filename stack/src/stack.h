/********************************\
 * Stack (char)                 *
 *                              *
 * Author: @theteachr (Nikhil)  *
\********************************/

#ifndef __STACH_H__
#define __STACH_H__

typedef struct
{
    char items[256];
    int top;
}stack;

void init(stack *);
void push(stack *, char);
char pop(stack *);
char peek(stack *);
int is_empty(stack *);

#endif

