#include "CWE_467.h"
#include <stdlib.h>

// CWE-467: Use of Sizeof() on Pointer Type
// This function demonstrates a vulnerability where sizeof() is used on a pointer type, leading to incorrect memory allocation.
void CWE_467_UseOfSizeofOnPointerType() {
    double *foo;

    // FLAW: Using sizeof on the pointer instead of the type it points to
    foo = (double *)malloc(sizeof(foo));

    // Normally, sizeof(double) should be used for correct memory allocation
}
