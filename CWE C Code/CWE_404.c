#include "CWE_404.h"
#include <stdio.h>

// Mock function to simulate checksum checking
int checkChecksum(char* buf) {
    // For demonstration purposes, we'll assume the checksum is always valid
    return 1;
}

// Mock function to simulate block decoding
void decodeBlock(char* buf) {
    // Simulated decoding logic
}

// CWE-404: Improper Resource Shutdown or Release
// This function demonstrates improper resource management by failing to close a file in certain conditions.
int CWE_404_DecodeFile(char* fName) {
    char buf[BUF_SZ];
    FILE* f = fopen(fName, "r");
    if (!f) {
        printf("cannot open %s\n", fName);
        return DECODE_FAIL;
    } else {
        while (fgets(buf, BUF_SZ, f)) {
            if (!checkChecksum(buf)) {
                // FLAW: Resource leak - 'f' is not closed if the checksum fails
                return DECODE_FAIL;
            } else {
                decodeBlock(buf);
            }
        }
    }
    fclose(f);
    return DECODE_SUCCESS;
}
