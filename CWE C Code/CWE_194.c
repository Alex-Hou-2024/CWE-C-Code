#include "CWE_194.h"
#include <stdio.h>
#include <string.h>

int GetUntrustedInt() {
    return 0x0000FFFF; // Returns 65535
}

// Mock function to simulate getting user input
char* GetUserInput(const char* prompt) {
    static char input[256] = "/home/user/example/path";
    printf("%s", prompt);
    return input;
}

// CWE-194: Unexpected Sign Extension
// This function demonstrates unexpected sign extension that can lead to buffer overflow.
void CWE_194_UnexpectedSignExtension() {
    char path[256];
    char *input;
    int i;
    short s;
    unsigned int sz;

    i = GetUntrustedInt(); // i = 65535
    s = i; // s = -1 due to overflow

    // CWE-697: Incorrect comparison leading to bypass of security check
    if (s > 256) {
        printf("Die painfully: go away!\n");
        return;
    }

    // CWE-194: Unexpected Sign Extension
    sz = s; // sz = 4294967295 due to sign extension

    // Output the values of i, s, and sz
    printf("i=%d, s=%d, sz=%u\n", i, s, sz);

    input = GetUserInput("Enter pathname:");

    // CWE-195: Unsigned to signed conversion error leading to buffer overflow (CWE-119)
    strncpy(path, input, s); // s is interpreted as unsigned, treated as MAX_INT, enabling buffer overflow
    path[255] = '\0'; // Avoid CWE-170 (Improper Null Termination)
    printf("Path is: %s\n", path);
}
