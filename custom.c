#include "custom.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>



Node *initialize(int value) {
    Node *head = (Node *)malloc(sizeof(Node));
    head->value = value;
    head->next = NULL;
    return head;
}
Node *insertStart(Node *head, int value) {
    Node *new = (Node *)malloc(sizeof(Node));

    new->value = value;
    new->next = head;

    return new;
}
