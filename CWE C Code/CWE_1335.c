#include "CWE_1335.h"

// CWE-1335: Improper Bitwise Shift Operation
// This function demonstrates an improper bitwise shift operation by attempting to shift by a negative value.
unsigned int CWE_1335_IncorrectBitwiseShift() {
    unsigned int r = 1 << -5; // Invalid shift operation, leading to undefined behavior
    return r;
}
