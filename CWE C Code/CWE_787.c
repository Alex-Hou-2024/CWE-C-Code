#include "CWE_787.h"

// CWE-787: Out-of-Bounds Write
// This function demonstrates a vulnerability where an out-of-bounds write occurs.
void CWE787_OutOfBoundsWrite(void) {
    int id_sequence[3];

    /* Populate the id array. */
    id_sequence[0] = 123;
    id_sequence[1] = 234;
    id_sequence[2] = 345;
    id_sequence[3] = 456;  // FLAW: Writing beyond the bounds of the array
}
