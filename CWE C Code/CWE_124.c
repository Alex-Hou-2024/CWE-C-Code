#include "CWE_124.h"
#include <stdlib.h>
#include <ctype.h>

// CWE-124: Buffer Underwrite (Buffer Underflow)
// This function demonstrates a buffer underwrite vulnerability by trimming
// trailing whitespace from a string without proper bounds checking.
char* CWE_124_TrimTrailingWhitespace(char *strMessage, int length) {
    char *retMessage;
    char *message = malloc(sizeof(char) * (length + 1));

    // Copy input string to a temporary string
    int index;
    for (index = 0; index < length; index++) {
        message[index] = strMessage[index];
    }
    message[index] = '\0';

    // Trim trailing whitespace
    int len = index - 1;
    while (isspace(message[len])) {
        message[len] = '\0';
        len--;

        // CWE-124 vulnerability: potential buffer underwrite if len becomes negative
        // This can lead to writing before the start of the allocated buffer, causing undefined behavior.
    }

    // Return string without trailing whitespace
    retMessage = message;
    return retMessage;
}
