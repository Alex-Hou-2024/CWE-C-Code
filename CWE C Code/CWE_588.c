#include "CWE_588.h"

// CWE-588: Attempt to Access a Field of a Non-struct Pointer
// This function demonstrates a vulnerability where a pointer to a non-struct type is accessed as if it were a struct.
int CWE_588_AccessNonStructPointer(void) {
    struct foo *fooPtr;

    // Assigning the address of the main function to a struct pointer
    fooPtr = (struct foo *)main;

    // FLAW: Attempting to access a field of a non-struct pointer
    fooPtr->i = 2;

    return fooPtr->i;
}
