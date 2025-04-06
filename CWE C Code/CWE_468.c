#include "CWE_468.h"

// CWE-468: Incorrect Pointer Scaling
// This function demonstrates incorrect pointer scaling when converting an int pointer to a char pointer.
void CWE_468_IncorrectPointerScaling(int *x) {
    int *p = x;
    
    // FLAW: Incorrect pointer scaling
    char *second_char = (char *)(p + 1);

    // 'second_char' now points to the address of p + sizeof(int),
    // not the address of the second char in the memory pointed to by p.
}
