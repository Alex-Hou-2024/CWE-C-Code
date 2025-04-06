#include "CWE_196.h"

// CWE-196: Unsigned to Signed Conversion Error
// This function demonstrates a sign conversion error when assigning an unsigned char to a signed char.
void CWE_196_SignConversionError() {
    unsigned char a = 0xFF;
    char ret;

    // This line introduces an error due to sign conversion
    ret = a; // Integer sign lost because of unsigned cast

    // The variable 'ret' now holds a negative value due to the sign extension, leading to potential logic errors.
}
