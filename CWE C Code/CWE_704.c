#include "CWE_704.h"

// CWE-704: Incorrect Type Conversion
// This function demonstrates a vulnerability where incorrect type conversions occur.
void CWE704_IncorrectTypeConversion(void) {
    int i;
    int *int_ptr; 
    long long int ii;
    float j = 4294967296.0;
    char c = 'a'; 

    ii = 4294967296;
    i = ii;       // FLAW: Potential truncation from long long to int
    ii = j;       // FLAW: Potential loss of precision converting float to long long
    j = c;        // FLAW: Implicit conversion from char to float
    c = i;        // FLAW: Potential truncation from int to char
    int_ptr = i;  // FLAW: Assigning int to a pointer

    return;
}
