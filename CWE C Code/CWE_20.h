#ifndef CWE_20_H
#define CWE_20_H

#include <stdio.h>
#include <stdlib.h>

// Constants
#define MAX_DIM 100

// Custom type definition
typedef int board_square_t;

// Function declarations
void CWE20_ImproperInputValidation(void);
void die(const char *message);

#endif // CWE_20_H
