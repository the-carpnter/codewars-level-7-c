#include <stddef.h>

struct node {
    int data;
    struct node *next;
};

size_t len_r(const struct node *list)
{
    return list ? 1 + len_r(list->next) : 0;
}
