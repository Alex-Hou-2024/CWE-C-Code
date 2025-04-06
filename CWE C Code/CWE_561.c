#include "CWE_561.h"

// Mock function to simulate Dead()
void Dead() {
    // Implementation of Dead, which should not be reachable
}

// CWE-561: Dead Code
// This function demonstrates a vulnerability where a block of code is unreachable, resulting in dead code.
void CWE_561_CheckDeadCode(bool b) {
    char *s = NULL;
    if (b) {
        s = "Yes";
        return;
    }

    if (s != NULL) {
        Dead();  // FLAW: Dead code - this block will never be executed
    }
}
