#include "CWE_120.h"
#include <stdio.h>

/*
 * CWE-120: Buffer Copy without Checking Size of Input
 * The following code demonstrates a traditional buffer overflow vulnerability
 * by copying user input directly into a fixed-size buffer without verifying
 * the length of the input. This can lead to memory corruption and potential 
 * security exploits.
 */

void test_cwe_120() {
    char last_name[20];
    printf("Enter your last name: ");
    // Vulnerable code: does not check the size of the input
    scanf("%s", last_name);
    // Additional code can be added here for further processing
}
