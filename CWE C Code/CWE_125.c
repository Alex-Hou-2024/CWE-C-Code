#include "CWE_125.h"
#include <stdio.h>

// CWE-125: Out-of-bounds Read
// This function demonstrates an out-of-bounds read vulnerability by accessing
// an array element without proper bounds checking in the else clause.
int CWE_125_GetValueFromArray(int *array, int len, int index) {
    int value;

    // Check that the array index is less than the maximum length of the array
    if (index < len) {
        // Get the value at the specified index of the array
        value = array[index];
    }
    // If array index is invalid, then output error message and return value indicating error
    else {
        // CWE-125 vulnerability: out-of-bounds read
        // Accessing array[index] without proper bounds checking
        printf("Value is: %d\n", array[index]); 
        value = -1;
    }

    return value;
}
