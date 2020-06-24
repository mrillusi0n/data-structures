/********************************\
 * Simplest Set                 *
 *                              *
 *                              *
 *                              *
 *                              *
 * Author: @theteachr           *
\********************************/

#define BUCKET_SIZE 16

typedef struct
{
    int *table[BUCKET_SIZE];
    int filled;
} SimpleSet;

void init(SimpleSet *);
void add(SimpleSet *, int);
void remove(SimpleSet *);


