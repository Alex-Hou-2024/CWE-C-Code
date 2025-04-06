#include "CWE_416.h"
#include <stdlib.h>
#include <stdio.h>

#define SIZE 1024

// Mock function to simulate logging
void logError(const char* message, char* ptr) {
    printf("%s: %s\n", message, ptr);
}

// CWE-416: Use After Free
// This function demonstrates a use after free vulnerability by using a pointer after the memory has been freed.
void CWE_416_UseAfterFree(int err) {
    char* ptr = (char*)malloc(SIZE);
    int abrt = 0;

    if (!ptr) {
        return;
    }

    if (err) {
        abrt = 1;
        free(ptr);
    }

    // FLAW: Using the pointer 'ptr' after it has been freed
    if (abrt) {
        logError("operation aborted before commit", ptr);
    }
}
