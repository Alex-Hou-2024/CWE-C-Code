#include "CWE_688.h"

// Mock function to simulate printLine()
void printLine(const char* line) {
    printf("%s\n", line);
}

// CWE-688: Function Call with Incorrect Variable or Reference as Argument
// This function demonstrates a vulnerability where a function is called with an incorrect variable or reference as an argument.
void CWE688_FunctionCallWithIncorrectVariable(void) {
    char dest[DEST_SIZE];
    int intFive = 5;

    /* FLAW: int argument passed, expecting string argument */
    sprintf(dest, "%s", intFive);
    printLine(dest);
}
