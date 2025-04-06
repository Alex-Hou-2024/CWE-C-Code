#include "CWE_562.h"

// Mock function to simulate fillInName()
void fillInName(char* name) {
    // Simulated name filling logic
}

// CWE-562: Return of Stack Variable Address
// This function demonstrates a vulnerability where the address of a stack variable is returned.
char* CWE_562_GetName(void) {
    char name[STR_MAX];
    fillInName(name);
    // FLAW: Returning the address of a stack variable
    return name;
}
