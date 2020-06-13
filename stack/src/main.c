/********************************\
 * Bracket Checker              *
 *                              *
 *                              *
 * Author: @theteachr (Nikhil)  *
\********************************/

#include <stdio.h>
#include "stack.h"

int is_closed_bracket(char);
int is_open_bracket(char);
char closed(char);

int main(int argc, char *argv[])
{
    stack brackets;

    if (argc != 2)
    {
        printf("Usage: %s [expression]\n", argv[0]);
        return -1;
    }

    char *expr = argv[1];
    int flag = 1;

    init(&brackets);

    // printf("Expression: ");
    // scanf("%[^\n]s", expr);

    for (int i = 0; expr[i] != 0; ++i)
    {
        char c = expr[i];
        
        if (is_open_bracket(c))
            push(&brackets, closed(c));
        else if (is_closed_bracket(c))
        {
            if (c != peek(&brackets))
            {
                flag = 0;
                break;
            }
            pop(&brackets);
        }
    }

    if (is_empty(&brackets) && flag) printf("Expression valid!\n");
    else { printf("Expression invalid :[\n"); return -1; }

    return 0;
}

char closed(char c)
{
    char x;

    switch (c)
    {
        case '(': x = ')'; break;
        case '[': x = ']'; break;
        case '{': x = '}'; break;
    }

    return x;
}

int is_open_bracket(char c)
{
    return c == '[' || c == '{' || c == '(';
}

int is_closed_bracket(char c)
{
    return c == ']' || c == '}' || c == ')';
}

