#include <stdio.h>

#include "mybag.h"

int main(int argc, char *argv[]) {
    bag *bag = bag_create(2);
    for (int i = 0; i < 5; i++) {
        bag_add(bag, ((i + 1) * 10));
    }

    int size = bag_size(bag);
    printf("size = %d\n", size);

    for (int i = 0; i < size; i++) {
        printf("value %d = %d\n", i + 1, bag_get(bag, i));
    }

    // bag->capacity = 10; // not allowed because of incomplete type

    return 0;
}
