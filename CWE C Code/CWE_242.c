#include "CWE_242.h"
#include <stdio.h>

#define BUFSIZE 256

// CWE-242: Use of Inherently Dangerous Function
// This function demonstrates the use of the inherently dangerous gets() function, which can lead to buffer overflows.
void CWE_242_UseOfDangerousFunction() {
    char buf[BUFSIZE];

    // Dangerous function usage
    gets(buf); // gets() is dangerous because it does not check for buffer overflows
}
