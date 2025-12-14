#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "custom.h"

int main(void) {
    Node *head = initialize(100);

    for (int i = 0; i<10; i++) {
        head = insertStart(head, (i*13)+2);
    }

    while (head != NULL) {
        printf("%d \n",head->value);
        head = head->next;
    }

    printf("Reached end of list.");
return 0;}