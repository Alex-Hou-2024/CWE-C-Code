#include "CWE_674.h"

// CWE-674: Uncontrolled Recursion
void CWE674_UncontrolledRecursion(int flg) {
    // Do some real work here, but the value of flg is unmodified
    if (flg) {
        CWE674_UncontrolledRecursion(flg); // FLAW: flg is never modified, leading to uncontrolled recursion
    }
}

// Example function to initiate the recursive call
void CWE674_InitiateRecursion(void) {
    int flag = 1; // Set to TRUE
    CWE674_UncontrolledRecursion(flag);
}
