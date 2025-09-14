// https://youtu.be/NeOTr0u7ALk

// .h - public interface
// .c - implementation details

// header file guard
// to unsure that this header file will be included only once
#ifndef UTIL_H
#define UTIL_H

// extern "C"
// to enable function overloading capability in c++ ("name mangling")
#ifdef __cplusplus
extern "C" {
#endif

typedef struct person;

double get_mean(double *values, int length);
void print_person_info(person *p);

#ifdef __cplusplus
}
#endif

#endif // UTIL_H
