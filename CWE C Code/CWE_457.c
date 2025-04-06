#include "CWE_457.h"
#include <stdio.h>

// CWE-457: Use of Uninitialized Variable
// This function demonstrates a vulnerability where a variable may be used without being properly initialized.
void CWE_457_UseOfUninitializedVariable(int i, int err_val) {
    char *test_string;

    if (i != err_val) {
        test_string = "Hello World!";
    }

    // FLAW: 'test_string' may not be initialized if 'i' equals 'err_val'
    printf("%s", test_string);
}
