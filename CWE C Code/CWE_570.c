#include "CWE_570.h"

// CWE-570: Expression is Always False
// This function demonstrates a vulnerability where an expression is always false due to incorrect bitwise operation.
int CWE_570_HasReadWriteAccess(unsigned int userMask) {
    unsigned int mask = BIT_READ & BIT_WRITE; // FLAW: Incorrect bitwise operation, results in mask = 0x0000

    // If the userMask has read and write bits set
    // then return 1 (true)
    if (userMask & mask) {
        return 1;
    }

    // Otherwise return 0 (false)
    return 0;
}
