#include "CWE_606.h"
#include <stdio.h>

// Mock function to simulate foo()
void foo(void) {
    // Simulated function logic
}

// CWE-606: Unchecked Input for Loop Condition
// This function demonstrates a vulnerability where input is used in a loop condition without validation.
void CWE_606_Iterate(int n) {
    int i;
    for (i = 0; i < n; i++) {
        foo();
    }
}

void CWE_606_IterateFoo(void) {
    unsigned int num;
    scanf("%u", &num);
    CWE_606_Iterate(num);
}
