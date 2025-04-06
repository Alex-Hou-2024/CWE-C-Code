#include "CWE_459.h"
#include <stdio.h>
#include <stdlib.h>

// Mock function for mkstemp
int MKSTEMP(char* template) {
    // For demonstration purposes, we'll simulate the creation of a temporary file
    return mkstemp(template);
}

// Mock function for fdopen
FILE* FDOPEN(int fileDesc, const char* mode) {
    return fdopen(fileDesc, mode);
}

// CWE-459: Incomplete Cleanup
// This function demonstrates a vulnerability where a temporary file is not properly deleted after use.
void CWE_459_IncompleteCleanup() {
    if (1) {
        char filename[] = "badXXXXXX";
        FILE *pFile;
        // Establish that this is a temporary file and that it should be deleted
        int fileDesc = MKSTEMP(filename);
        if (fileDesc != -1) {
            pFile = FDOPEN(fileDesc, "w");
            if (pFile != NULL) {
                fprintf(pFile, "Temporary file");
                fclose(pFile);
                // FLAW: We don't unlink the file, leaving it on the filesystem
            }
        }
    }
}
