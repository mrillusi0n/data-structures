/********************************\
 * Simplest Set                 *
 *                              *
 *                              *
 *                              *
 *                              *
 * Author: @theteachr           *
\********************************/

#include "set.h"
#include <stdlib.h>
#include <stdio.h>

/* private functions */
static int hash(int);

void init(SimpleSet *set)
{
    for (int i = 0; i < BUCKET_SIZE; i++)
        set->table[i] = NULL;

    set->filled = 0;
}

void add(SimpleSet *set, int member)
{
    int idx = hash(member);
    int *loc = set->table[idx];

    if (loc == NULL)
    {
        loc = malloc(sizeof(int));
        *loc = member;
        return;
    }

    if (*loc != member)
    {
        int new_idx = next_empty(set, idx);

        if (new_idx == -1)
        {
            printf("Insertion isn't possible.\n");
            return;
        }

        set->table[new_node] = malloc(sizeof(int));
        *(set->table[new_node]) = member;
    }
}

