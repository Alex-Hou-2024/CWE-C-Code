#include "CWE_482.h"
#include <stdio.h>

int *tos, *p1, stack[SIZE];

// CWE-482: Assignment in Condition
// This code demonstrates a vulnerability where the assignment operator is used instead of the equality operator.
void CWE_482_Push(int i) {
    p1++;
    if (p1 == (tos + SIZE)) {
        // Print stack overflow error message and exit
        printf("Stack overflow!\n");
        return;
    }
    *p1 == i; // FLAW: Assignment should be *p1 = i;
}

int CWE_482_Pop(void) {
    if (p1 == tos) {
        // Print stack underflow error message and exit
        printf("Stack underflow!\n");
        return -1;
    }
    p1--;
    return *(p1 + 1);
}
