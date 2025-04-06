#include "CWE_665.h"
#include <stdio.h>
#include <string.h>

// CWE-665: Improper Initialization
// This function demonstrates a vulnerability where a string is improperly initialized before concatenation.
void CWE_665_ImproperInitialization(void) {
    char str[20];

    // FLAW: 'str' is not initialized before being used in strcat, leading to undefined behavior
    strcat(str, "hello world");
    printf("%s", str);
}
