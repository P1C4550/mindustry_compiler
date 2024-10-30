#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR_SIZE_BUFFER 10 // when run out add this to capacity or remove if below
                              // TODO: EXPLAIN BETTER

#include <stdio.h>
#include <stdlib.h>

typedef struct vector
{
    void * data;
    unsigned short element_size;
    unsigned long size; // number of elements
    unsigned long capacity;
} vector;

void vector_init(vector * v, short element_size)
{
    v->capacity = 10
}

void vector_auto_resize(vector * v)
{
    if (v->capacity < v->size + )
    {
        
    }
}

void vector_print(vector * v)
{
    for (long index = 0; index < v->size; index++)
    {
        printf("x", ((unsigned char *)v)[index]);
    }
}

#endif // VECTOR_H