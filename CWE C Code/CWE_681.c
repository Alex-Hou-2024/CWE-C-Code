#include "CWE_681.h"

#define ERROR -1

// CWE-681: Incorrect Conversion between Numeric Types
// This function demonstrates a vulnerability where an incorrect conversion between numeric types occurs.
unsigned int CWE_681_ReadData(void) {
    int amount = 0;
    int result = ERROR;

    if (result == ERROR) {
        amount = -1;
    }

    // FLAW: Returning an unsigned int with a value that was assigned as a negative int
    return amount;
}
