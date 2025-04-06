#include "CWE_253.h"
#include <stdio.h>
#include <stdlib.h>

// CWE-253: Incorrect Check of Function Return Value
// This function demonstrates an incorrect check of the return value of a function, which can lead to logical errors.
void CWE_253_IncorrectCheckOfReturnValue() {
    int *tmp;

    // Allocating memory for an integer array
    tmp = malloc(sizeof(int) * 4);

    // Incorrect check: tmp is compared to a negative value, which is not valid for pointers
    if (tmp < 0) {
        perror("Failure");
        // The correct check should be if (tmp == NULL)
    }
}
