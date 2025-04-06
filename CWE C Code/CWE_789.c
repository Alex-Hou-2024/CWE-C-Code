#include "CWE_789.h"

// Mock function to simulate GetUntrustedInt()
unsigned int GetUntrustedInt(void) {
    return 1000000; // Example untrusted input
}

// Mock function to simulate InitializeString()
void InitializeString(char *string) {
    // Simulated initialization logic
}

// CWE-789: Uncontrolled Memory Allocation
// This function demonstrates a vulnerability where memory is allocated based on an untrusted size without proper checks.
void CWE789_UncontrolledMemoryAllocation(void) {
    unsigned int size = GetUntrustedInt();
    /* ignore integer overflow (CWE-190) for this example */

    unsigned int totBytes = size * sizeof(char);
    char *string = (char *)malloc(totBytes);
    
    if (string != NULL) {
        InitializeString(string);
    }
}
