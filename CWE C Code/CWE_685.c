#include "CWE_685.h"

// Mock function to simulate printLine()
void printLine(const char* line) {
    printf("%s\n", line);
}

// CWE-685: Function Call with Incorrect Number of Arguments
// This function demonstrates a vulnerability where a function is called with an incorrect number of arguments.
void CWE685_FunctionCallWithIncorrectNumberOfArguments(void) {
    char dest[DEST_SIZE];
    /* FLAW: Incorrect number of arguments */
    sprintf(dest, "%s %s", SOURCE_STRING); // Only one argument provided instead of two
    printLine(dest);
}
