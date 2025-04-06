#include "CWE_122.h"
#include <stdlib.h>
#include <string.h>

// CWE-122: Heap-based Buffer Overflow
// This function demonstrates a heap buffer overflow vulnerability by copying
// a user-provided input into a dynamically allocated buffer without proper bounds checking.
void CWE_122_HeapBufferOverflow(char *input) {
    char *buf;
    buf = (char *)malloc(sizeof(char) * 256);
    
    // Potentially dangerous function call leading to CWE-122 vulnerability.
    strcpy(buf, input); // This could cause a buffer overflow if input exceeds 256 bytes.
    
    // The vulnerability lies in the fact that strcpy does not perform bounds checking.
    // If the input is larger than the allocated buffer, it will overwrite adjacent memory, leading to undefined behavior.
    
    free(buf); // Free the allocated memory
}
