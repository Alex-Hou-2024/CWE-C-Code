#include "CWE_480.h"
#include <stdio.h>

// CWE-480: Incorrect Use of Operator
// This function demonstrates a vulnerability where the assignment operator is used instead of the equality operator.
int CWE_480_IsValid(int value) {
    if (value = 100) { // FLAW: Assignment instead of comparison
        printf("Value is valid\n");
        return 1;
    }
    printf("Value is not valid\n");
    return 0;
}
