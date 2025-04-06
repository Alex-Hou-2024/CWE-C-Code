#include "CWE_806.h"
#include <string.h>

// CWE-806: Buffer Access Using Size of Source Buffer
// This function demonstrates a vulnerability where a buffer is accessed using the size of the source buffer, leading to overflow.
void CWE806_BufferAccessUsingSourceSize(void) {
    char source[21] = "the character string";
    char dest[12];

    // FLAW: Using the size of the source buffer to copy data into the destination buffer, potentially causing overflow
    strncpy(dest, source, sizeof(source) - 1);
}
