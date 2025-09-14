// https://gcc.gnu.org/onlinedocs/cpp/Variadic-Macros.html

#include <stdio.h>
#include <stdbool.h>

typedef struct {
    bool is_employee;
    size_t age;
    char *name;
} user_t;

void print_user_(user_t user);
#define print_user(...) \
    print_user_((user_t) { .is_employee = true, __VA_ARGS__ })

int main(int argc, char *argv[]) {
    user_t user = {
        .name = "Konstantine",
        .age = 35
    };
    print_user_(user);

    print_user(
        .name = "Anatoly",
        .age = 30
    );
    
    return 0;
}

void print_user_(user_t user) {
    printf("is_employee = %d\n", user.is_employee);
    printf("age = %d\n", user.age);
    printf("name = %s\n\n", user.name);
}
