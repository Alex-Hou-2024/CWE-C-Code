#include "CWE_415.h"
#include <stdlib.h>

#define SIZE 1024

// CWE-415: Double Free
// This function demonstrates a double free vulnerability by freeing the same memory twice under certain conditions.
void CWE_415_DoubleFree(int abrt) {
    char* ptr = (char*)malloc(SIZE);
    if (!ptr) {
        return;
    }

    if (abrt) {
        free(ptr);
    }

    // FLAW: The memory pointed to by ptr is freed a second time, leading to a double free vulnerability
    free(ptr);
}
