#include "CWE_195.h"
#include <stdio.h>

#define ERROR -1

// CWE-195: Signed to Unsigned Conversion Error
// This function demonstrates an error caused by returning a signed integer as an unsigned integer.
unsigned int CWE_195_SignedToUnsignedConversionError() {
    int amount = 0;
    int result = ERROR;

    if (result == ERROR) {
        amount = -1; // Signed to unsigned conversion will lead to an unexpected large value
    }

    // Returning a signed integer as an unsigned integer can cause unexpected behavior
    return amount;
}
