#include "CWE_478.h"
#include <stdio.h>
#include <stdlib.h>

// Mock function to simulate a security check
int security_check(int data) {
    // This function is a placeholder for actual security check logic
    return data;
}

// CWE-478: Missing Default Case in Switch
// This function demonstrates a vulnerability where the default case is missing in a switch statement.
void CWE_478_MissingDefaultCaseInSwitch(int data) {
    int result;
    
    result = security_check(data);

    switch (result) {
        case FAILED:
            printf("Security check failed!\n");
            exit(-1);
            // Break never reached because of exit()
            break;

        case PASSED:
            printf("Security check passed.\n");
            break;
    }
    // FLAW: No default case to handle unexpected values
    // Program execution continues...
}
