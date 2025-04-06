#include "CWE_824.h"

// CWE-824: Access of Uninitialized Pointer
// This function demonstrates a vulnerability where an uninitialized pointer is accessed.
void CWE824_UninitializedPointer(void) {
    int a = 5;
    int *p;  
    int ret;

    // FLAW: Accessing an uninitialized pointer
    ret = *p;
}
