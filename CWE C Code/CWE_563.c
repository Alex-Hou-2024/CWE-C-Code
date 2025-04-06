#include "CWE_563.h"

// Mock function to simulate getName()
char* CWE_563_GetName(void) {
    // Simulated function that returns a string
    return "Name";
}

// Mock function to simulate getNewBuffer()
char* CWE_563_GetNewBuffer(char* buf) {
    // Simulated function that returns a new buffer
    return buf;
}

// CWE-563: Unused Variable Assignment
// This function demonstrates a vulnerability where a variable is assigned a value but never used.
void CWE_563_UnusedVariableAssignment(void) {
    char* r;

    r = CWE_563_GetName(); // FLAW: The value assigned to 'r' is never used
    r = CWE_563_GetNewBuffer("Buffer"); // The previous value is overwritten without being used
}
