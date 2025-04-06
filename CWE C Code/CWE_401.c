#include "CWE_401.h"
#include <stdlib.h>
#include <unistd.h>

#define BLOCK_SIZE 1024

// CWE-401: Improper Release of Memory on Removal of Last Reference (Memory Leak)
// This function demonstrates a memory leak issue by not freeing allocated memory when an error occurs.
char* CWE_401_GetBlock(int fd) {
    char* buf = (char*) malloc(BLOCK_SIZE);
    if (!buf) {
        return NULL;
    }
    if (read(fd, buf, BLOCK_SIZE) != BLOCK_SIZE) {
        // FLAW: Memory allocated to 'buf' is not freed before returning NULL, leading to a memory leak
        return NULL;
    }
    return buf;
}
