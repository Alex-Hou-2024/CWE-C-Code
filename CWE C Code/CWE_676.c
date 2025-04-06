#include "CWE_676.h"
#include <string.h>

// CWE-676: Use of Potentially Dangerous Function
// This function demonstrates a vulnerability where a potentially dangerous function (strcpy) is used.
void CWE_676_ManipulateString(char *string) {
    char buf[24];

    // FLAW: Using strcpy, which can lead to buffer overflow if 'string' is larger than 'buf'
    strcpy(buf, string);

    // Further manipulation of the string
    // ...
}
