#include "CWE_193.h"
#include <string.h>

// CWE-193: Off-by-One Error
// This function demonstrates an off-by-one error when concatenating strings into a fixed-size buffer.
void CWE_193_OffByOneError(char *firstname, char *lastname) {
    char fullname[40];

    fullname[0] = '\0';

    // Off-by-one error: strncat adds up to 20 characters plus the null terminator,
    // but there's no room left for the null terminator in fullname.
    strncat(fullname, firstname, 20);
    strncat(fullname, lastname, 20);
    
    // This can cause the null terminator to be written out of bounds, leading to potential buffer overflow.
}
