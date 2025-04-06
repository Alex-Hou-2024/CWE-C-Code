#include "CWE_252.h"
#include <stdio.h>
#include <string.h>

// CWE-252: Unchecked Return Value
// This function demonstrates an unchecked return value that can lead to potential issues if not handled properly.
void CWE_252_UncheckedReturnValue() {
    char buf[10], cp_buf[10];

    // Potential issue: Return value of fgets is not checked
    fgets(buf, 10, stdin);

    // Potential issue: strcpy is used without verifying the content of buf
    strcpy(cp_buf, buf);
}
