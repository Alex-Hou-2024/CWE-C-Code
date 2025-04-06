#include "CWE_590.h"
#include <stdlib.h>

// CWE-590: Free of Memory not on the Heap
// This function demonstrates a vulnerability where memory that is not allocated on the heap is freed.
void CWE_590_FreeNonHeapMemory(void) {
    record_t bar[MAX_SIZE];

    /* do something interesting with bar */

    // FLAW: Attempting to free memory that was not allocated on the heap
    free(bar);
}
