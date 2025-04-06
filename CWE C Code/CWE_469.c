#include "CWE_469.h"

// CWE-469: Use of Pointer Subtraction to Determine Size
// This function demonstrates a vulnerability where pointer subtraction is incorrectly used to determine the size of a linked list.
int CWE_469_Size(struct node* head) {
    struct node* current = head;
    struct node* tail = NULL;

    while (current != NULL) {
        tail = current;
        current = current->next;
    }

    // FLAW: Pointer subtraction used to determine the size, which is incorrect in this context
    return tail - head;
}
