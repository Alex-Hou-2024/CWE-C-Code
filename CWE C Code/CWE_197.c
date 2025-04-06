#include "CWE_197.h"
#include <stdio.h>

// CWE-197: Numeric Truncation Error
// This function demonstrates a numeric truncation error when assigning an int value to a short variable.
void CWE_197_NumericTruncationError() {
    int intPrimitive;
    short shortPrimitive;

    // Set intPrimitive to the maximum value for a signed integer
    intPrimitive = (int)(~((int)0) ^ (1 << (sizeof(int)*8-1)));

    // Assigning a large int value to a short, which will truncate the value
    shortPrimitive = intPrimitive;

    // Output the values to show the truncation
    printf("Int MAXINT: %d\nShort MAXINT: %d\n", intPrimitive, shortPrimitive);
}
