#include "CWE_121.h"
#include <string.h>

// CWE-121: Stack-based Buffer Overflow
// This function demonstrates a stack buffer overflow vulnerability by copying
// a user-provided input into a fixed-size buffer without proper bounds checking.
void CWE_121_BufferOverflow(char *input) {
    char buf[256];
    
    // Potentially dangerous function call leading to CWE-121 vulnerability.
    strcpy(buf, input); // This could cause a buffer overflow if input exceeds 256 bytes.
    
    // The vulnerability lies in the fact that strcpy does not perform bounds checking.
    // If the input is larger than the buffer, it will overwrite adjacent memory, leading to undefined behavior.
}

