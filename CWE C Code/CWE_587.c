#include "CWE_587.h"

// CWE-587: Assignment of a Fixed Address to a Pointer
// This function demonstrates a vulnerability where a fixed address is assigned to a function pointer, which could lead to code injection.
int CWE_587_ExecuteFunction(void) {
    // Assigning a fixed address to the function pointer
    int (*pt2Function)(float, char, char) = (int (*)(float, char, char))0x08040000;

    // Attempting to execute the function at the fixed address
    // FLAW: This could lead to the execution of arbitrary code
    int result2 = (*pt2Function)(12, 'a', 'b');

    return result2;
}
