#include "CWE_119.h"

// CWE-119: Improper Restriction of Operations within the Bounds of a Memory Buffer
// This code is intended to demonstrate a vulnerability related to memory buffer overflow
// due to improper handling of buffer sizes.

char* copy_input(char *user_supplied_string) {
    int i, dst_index;
    char *dst_buf = (char*)malloc(4*sizeof(char) * 100);  // Allocate memory for the buffer

    if ( strlen(user_supplied_string) >= 100 ) {  // Check if input string is too long
        printf("User string too long, die evil hacker!\n");
        exit(1);
    }

    dst_index = 0;
    for ( i = 0; i < strlen(user_supplied_string); i++ ) {
        if( '&' == user_supplied_string[i] ) {
            dst_buf[dst_index++] = '&';
            dst_buf[dst_index++] = 'a';
            dst_buf[dst_index++] = 'm';
            dst_buf[dst_index++] = 'p';
            dst_buf[dst_index++] = ';';
        } else if ('<' == user_supplied_string[i] ) {
            // Potentially vulnerable code to encode "<" as "&lt;"
            dst_buf[dst_index++] = '&';
            dst_buf[dst_index++] = 'l';
            dst_buf[dst_index++] = 't';
            dst_buf[dst_index++] = ';';
        } else {
            dst_buf[dst_index++] = user_supplied_string[i];
        }
        // Potential CWE-119 vulnerability: No check on dst_index against buffer size
    }

    return dst_buf;
}
