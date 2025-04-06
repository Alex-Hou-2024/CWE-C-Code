#include "CWE_672.h"

// CWE-672: Operation on a Resource after Expiration or Release
// This function demonstrates a vulnerability where a resource (memory) is freed and then used again.
void CWE_672_UseFreedResource(int abrt) {
    char* ptr = (char*)malloc(SIZE);

    if (abrt) {
        free(ptr);
    }

    // FLAW: Attempting to free memory that may have already been freed
    free(ptr);
}
