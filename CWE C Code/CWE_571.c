#include "CWE_571.h"
#include <stdio.h>
#include <stdlib.h>

// Mock function to simulate printLine()
void printLine(const char* message) {
    printf("%s\n", message);
}

// CWE-571: Expression is Always True
// This function demonstrates a vulnerability where an expression is always true.
void CWE_571_ExpressionAlwaysTrue(void) {
    // Ensure (0 <= intBad < UINT_MAX) and that uIntBad is pseudo-random
    unsigned int uIntBad = (unsigned int)(rand() * 2);

    // FLAW: This expression is always true
    if (uIntBad >= 0) {
        printLine("Always prints");
    }
}
