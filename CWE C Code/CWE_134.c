#include "CWE_134.h"
#include <stdio.h>
#include <string.h>

// CWE-134: Use of Externally-Controlled Format String
void CWE134_PrintWrapper(char *string) {
    // FLAW: The format string is controlled externally, leading to potential vulnerabilities
    printf(string);
}

// Function with a different name instead of main
void CWE134_Function(void) {
    char buf[5012];
    memcpy(buf, argv[1], 5012);
    CWE134_PrintWrapper(argv[1]);
}
