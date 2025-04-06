#include "CWE_393.h"

// CWE-393: Returning an Incorrect Status Code
// This function demonstrates a failure to return a status code in all execution paths.
int CWE_393_NotReturn001Func(int flag) {
    if (flag == 0) {
        return 0;
    }
    // FLAW: No return value for non-zero flag
}
