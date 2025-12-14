#ifndef QUALITATIVE_SOLVER_CUSTOM_H
#define QUALITATIVE_SOLVER_CUSTOM_H
#include <stdbool.h>
typedef struct {
    int value;
    struct Node *next;
}Node;

Node *initialize(int value);
Node *insertStart(Node *head, int value);

#endif //QUALITATIVE_SOLVER_CUSTOM_H