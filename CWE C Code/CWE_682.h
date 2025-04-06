#ifndef CWE_682_H
#define CWE_682_H

#include <stdlib.h>

// Struct definition
typedef struct {
    char imgData[10240]; // 10kB image data
} img_t;

// Function declarations
img_t* CWE_682_AllocateImageTable(int num_imgs);
int get_num_imgs(void);

#endif // CWE_682_H
