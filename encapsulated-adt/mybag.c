#include <stdlib.h>
#include <stdbool.h>

#include "mybag.h"

typedef struct bag_s {
    size_t capacity;
    size_t size;
    int *values;
} bag;

bag *bag_create(size_t capacity) {
    bag *bag = malloc(sizeof(bag));
    bag->capacity = capacity;
    bag->size = 0;
    bag->values = malloc(bag->capacity * sizeof(int));
    return bag;
}

bool bag_add(bag *bag, int value) {
    if (bag->size == bag->capacity) {
        bag->capacity *= 2;
        bag->values = realloc(bag->values, bag->capacity * sizeof(int));
    }

    bag->values[bag->size++] = value;
    return true;
}

int bag_get(bag *bag, size_t index) {
    return bag->values[index];
}

size_t bag_size(bag *bag) {
    return bag->size;
}
