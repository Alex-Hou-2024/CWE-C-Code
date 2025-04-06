#include "CWE_191.h"

// CWE-191: Integer Underflow (Wraparound)
// This function demonstrates an integer underflow by decrementing the minimum value of an integer.
void CWE_191_IntegerUnderflow() {
    int i;
    i = -2147483648; // Minimum value for a 32-bit signed integer
    i = i - 1;       // This operation causes an integer underflow, leading to wraparound
}
