#include "CWE_131.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_SIZE 100

// CWE-131: Incorrect Calculation of Buffer Size
// This function demonstrates a buffer overflow vulnerability by incorrectly calculating the required buffer size.
char* CWE_131_CopyInput(char *user_supplied_string) {
    int i, dst_index;
    // Incorrect calculation of buffer size, assuming a fixed size instead of calculating based on the input
    char *dst_buf = (char*)malloc(4 * sizeof(char) * MAX_SIZE);
    if (MAX_SIZE <= strlen(user_supplied_string)) {
        printf("user string too long, die evil hacker!\n");
        exit(1);
    }
    dst_index = 0;
    for (i = 0; i < strlen(user_supplied_string); i++) {
        if ('&' == user_supplied_string[i]) {
            // Encoding '&' as "&amp;"
            dst_buf[dst_index++] = '&';
            dst_buf[dst_index++] = 'a';
            dst_buf[dst_index++] = 'm';
            dst_buf[dst_index++] = 'p';
            dst_buf[dst_index++] = ';';
        }
        else if ('<' == user_supplied_string[i]) {
            // Placeholder for encoding '<' as "&lt;"
        }
        else {
            dst_buf[dst_index++] = user_supplied_string[i];
        }
    }
    return dst_buf;
}
