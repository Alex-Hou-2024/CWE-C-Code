#include "CWE_234.h"
#include <stdio.h>

// CWE-234: Failure to Handle Missing Parameters
// This function demonstrates a failure to handle missing parameters, leading to potential logic errors.
void CWE_234_FooFunction(int one, int two) {
    int three = 0; // Default value for the missing parameter

    printf("1) %d\n2) %d\n3) %d\n", one, two, three);
}
