#ifndef MY_BAG_H
#define MY_BAG_H

#include <stdbool.h>

// incomplete type
typedef struct bag_s bag;

bag *bag_create(size_t capacity);
bool bag_add(bag *bag, int value);
int bag_get(bag *bag, size_t index);
size_t bag_size(bag *bag);

#endif // MY_BAG_H
