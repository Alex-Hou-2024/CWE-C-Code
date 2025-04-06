#include "CWE_170.h"
#include <stdio.h>
#include <string.h>

// CWE-170: Improper Null Termination
void CWE170_ImproperNullTermination(void) {
    char longString[] = "String signifying nothing";
    char shortString[16];

    strncpy(shortString, longString, 16);
    printf("The last character in shortString is: %c (%1$x)\n", shortString[15]);
}
