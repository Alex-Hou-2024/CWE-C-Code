#include "CWE_481.h"
#include <stdio.h>

// CWE-481: Assignment in Conditional Expression
// This function demonstrates a vulnerability where an assignment is made instead of a comparison.
int CWE_481_IsValid(int value) {
    if (value = 100) { // FLAW: Assignment instead of comparison
        printf("Value is valid\n");
        return 1;
    }
    printf("Value is not valid\n");
    return 0;
}
