#include "stack.h"

void push(stack *st, char c)
{
    st->items[++st->top] = c;
}

char pop(stack *st)
{
    return st->items[st->top--];
}

void init(stack *st)
{
    st->top = -1;
}

char peek(stack *st)
{
    char c = pop(st);
    push(st, c);
    return c;
}

int is_empty(stack *st)
{
    return st->top == -1;
}

