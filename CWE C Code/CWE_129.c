#include "CWE_129.h"
#include <stdio.h>

// CWE-129: Improper Validation of Array Index
// This function demonstrates improper validation of array index by accessing
// an array element without verifying if the index is within the valid bounds.
int CWE_129_GetValueFromIndex(int *array, int len, int index) {
    if (index >= 0 && index < len) {
        // Return the value at the specified index if it's within bounds
        return array[index];
    } else {
        // CWE-129 vulnerability: improper validation of array index
        // If index is out of bounds, this code would attempt to access invalid memory
        // which may lead to undefined behavior.
        printf("Attempted to access out-of-bounds index: %d\n", index);
        return -1;
    }
}
