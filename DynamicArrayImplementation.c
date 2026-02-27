// Implementation of std::vector from C++ in C.

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct{
    int *items;
    size_t count;
    size_t capacity;
} Vector;

void push_back(Vector *vector, int num) {
    if (vector->count >= vector->capacity) {
        if (vector->capacity == 0) {
            vector->capacity = 1;
        } else {
          vector->capacity *= 2;
        }

        int *new_items = realloc(vector->items, vector->capacity * sizeof(*vector->items));

        if (!new_items) {
          perror("realloc failed");
          exit(1);
        }

        vector->items = new_items;
    }

    vector->items[vector->count++] = num;
}

int main() {
    Vector vec = {0};
    push_back(&vec, 69);
    push_back(&vec, 67);
    push_back(&vec, 420);
    push_back(&vec, 1337);
    
    for (int i = 0; i < vec.count; i++) {    
        printf("%d\n", vec.items[i]);
    }
    
    free(vec.items);
    return 0;
}
