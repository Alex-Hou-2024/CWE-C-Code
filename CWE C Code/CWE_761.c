#include "CWE_761.h"

// CWE-761: Free of Pointer not at Start of Buffer
int CWE761_ContainsChar(char c) {
    char *str;
    str = (char*)malloc(20 * sizeof(char));
    strcpy(str, "Search Me!");
    while (*str != NULL) {
        if (*str == c) {
            /* matched char, free string and return success */
            free(str); // FLAW: Freeing memory that is not at the start of the buffer
            return SUCCESS;
        }
        /* didn't match yet, increment pointer and try next char */
        str = str + 1;
    }
    /* we did not match the char in the string, free mem and return failure */
    free(str); // FLAW: Freeing memory that is not at the start of the buffer
    return FAILURE;
}
