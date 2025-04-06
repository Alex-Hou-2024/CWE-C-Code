#include "CWE_680.h"
#include <stdio.h>

// CWE-680: Integer Overflow to Buffer Overflow
// This function demonstrates a vulnerability where an integer overflow can lead to a buffer overflow.
void CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_67b_badSink(CWE680_Integer_Overflow_to_Buffer_Overflow__malloc_rand_67_structType myStruct) {
    int data = myStruct.structFirst;
    {
        size_t i;
        int *intPointer;
        /* POTENTIAL FLAW: if data * sizeof(int) > SIZE_MAX, overflows to a small value
         * so that the for loop doing the initialization causes a buffer overflow */
        intPointer = (int*)malloc(data * sizeof(int));
        if (intPointer == NULL) {exit(-1);}
        for (i = 0; i < (size_t)data; i++) {
            intPointer[i] = 0; /* Potentially writes beyond the boundary of intPointer */
        }
        printf("%d\n", intPointer[0]);
        free(intPointer);
    }
}
